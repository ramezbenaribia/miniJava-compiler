%{
	
    #include <stdio.h>
    #include <string.h>
    #include <stdbool.h>
    #include "SemantiqueAnalyser.h"
	
    #define YYSTYPE char*

    int yyparse(void);
    int yyerror(char const *msg);	
    int yylex(void);

    extern int line;

    int classID = 0;
    int level = 0;
    bool isParam = false;   
    int method_call_index = -1;
    int expression_level = 0;


    #define YYERROR_VERBOSE 1
    

%}

%token  PUBLIC       
%token  STATIC       
%token  _CLASS       
%token  VOID         
%token  MAIN         
%token  EXTENDS      
%token  RETURN     
%token  PRINT        
%token  LENGTH       
%token  THIS         
%token  NEW          
%token  IF           
%token  ELSE
%token  WHILE      
%token  INT  
%token  INT_ERROR  
%token  STRING  
%token  STRING_ERROR  
%token  DATATYPE     
%token  PAR_OUVRANTE   
%token  PAR_FERMANTE  
%token  TAB_OUVRANTE 
%token  TAB_FERMANTE 
%token  ACO_OUVRANTE     
%token  ACO_FERMANTE    
%token  OPERATOR          
%token  POINT         
%token  POINT_VIRGULE   
%token  VIRGULE    
%token  DOUBLEQUOTE 
%token  SINGLEQUOTE 
%token  PLUS   
%token  MOINS       
%token  MULTIPLIER    
%token  NOT      
%token  AFFECTATION       
%token  DIV         
%token  COMPOP      
%token  BOOL   
%token  NUMBER
%token  ID   


%start program

%%

program              : MainClass ClassDeclarationRepeat           
                        { 
                            check_main(); 
                        }


ClassDeclarationRepeat          :ClassDeclaration ClassDeclarationRepeat       
                                |epsilon;


ClassDeclaration     : ClassScope  ExtendsID ACO_OUVRANTE VarDeclarationRepeat MethodDeclarationRepeat ACO_FERMANTE 
                        | error ExtendsID ACO_OUVRANTE VarDeclarationRepeat MethodDeclarationRepeat ACO_FERMANTE  {yyerror (" erreur! mot cle class errone dans la line : "); YYABORT}
                        | ClassScope ExtendsID error VarDeclarationRepeat MethodDeclarationRepeat ACO_FERMANTE     { yyerror (" erreur! acolade ouvarnte  manquant dans la line :  "); YYABORT}
                        | ClassScope ExtendsID ACO_OUVRANTE VarDeclarationRepeat MethodDeclarationRepeat error      { yyerror (" erreur! acolade FERMANT  manquant dans la line :   "); YYABORT}
                        |epsilon
                        ;

ExtendsID           : EXTENDS ID
                        {
                            insertSymbol($2,EXTENSION,CLASS,"IDENT",0,classID);
                            level = 0;
                        }
                        | error ID        { yyerror ("  mot cle EXTENDS manquant ou bien errone dans la line : "); YYABORT}
                        | EXTENDS error      { yyerror ("erreur identifier errone dans la line : "); YYABORT}
                        | epsilon      {level = 0;}
                        ;

VarDeclarationRepeat		:VarDeclaration VarDeclarationRepeat	
                            |epsilon;


VarDeclaration       : Type POINT_VIRGULE 
                         |Type  AFFECTATION QUOTE ID  QUOTE POINT_VIRGULE
                        |Type  AFFECTATION error ID  QUOTE POINT_VIRGULE {yyerror ("  QUOTE  manquante  dans la line :"); YYABORT}
                        |Type  AFFECTATION QUOTE ID  error POINT_VIRGULE {yyerror ("  QUOTE  manquante  dans la line :"); YYABORT}
                        |Type error POINT_VIRGULE {yyerror ("erreur identifier errone dans la line :"); YYABORT} 
                        |Type   error  {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT}; 

        		        |Type  AFFECTATION  NUMBER POINT_VIRGULE
        		|       Type  AFFECTATION  error POINT_VIRGULE  {yyerror ("valeur manquante  dans la line :"); YYABORT} ;
                        ;  

                       
QUOTE               :DOUBLEQUOTE 
                    |SINGLEQUOTE   



MethodDeclarationRepeat	:MethodDeclaration MethodDeclarationRepeat	
                        |epsilon;                              

MethodDeclaration    : PUBLIC MethodType PAR_OUVRANTE TIVTIRepeat PAR_FERMANTE ACO_OUVRANTE VarDeclarationRepeat STATEMENTRepeat RETURN Expression POINT_VIRGULE ACO_FERMANTE      
                        | error MethodType PAR_OUVRANTE TIVTIRepeat PAR_FERMANTE ACO_OUVRANTE VarDeclarationRepeat STATEMENTRepeat RETURN Expression POINT_VIRGULE ACO_FERMANTE    { yyerror (" mot cle Public class manquant ou errone dans la line "); YYABORT}
                        | PUBLIC error error TIVTIRepeat PAR_FERMANTE ACO_OUVRANTE VarDeclarationRepeat STATEMENTRepeat RETURN Expression POINT_VIRGULE ACO_FERMANTE        { yyerror (" erreur parenthese ouvarnte  manquante dans la line :"); YYABORT}
                        | PUBLIC MethodType PAR_OUVRANTE TIVTIRepeat error ACO_OUVRANTE VarDeclarationRepeat STATEMENTRepeat RETURN Expression POINT_VIRGULE ACO_FERMANTE         { yyerror (" erreur parenthese fermante  manquante dans la line : "); YYABORT}
                        | PUBLIC MethodType PAR_OUVRANTE TIVTIRepeat PAR_FERMANTE error VarDeclarationRepeat STATEMENTRepeat RETURN Expression POINT_VIRGULE ACO_FERMANTE      { yyerror (" acolade ouvrant  manquant dans la line :"); YYABORT}
                        | PUBLIC MethodType PAR_OUVRANTE TIVTIRepeat PAR_FERMANTE ACO_OUVRANTE VarDeclarationRepeat STATEMENTRepeat error Expression POINT_VIRGULE ACO_FERMANTE    { yyerror (" mot cle Return manquant ou errone dans la line "); YYABORT}
                        | PUBLIC MethodType PAR_OUVRANTE TIVTIRepeat PAR_FERMANTE ACO_OUVRANTE VarDeclarationRepeat STATEMENTRepeat RETURN Expression error ACO_FERMANTE       { yyerror (" POINT_VIRGULE manquant  dans la line :"); YYABORT}
                        | PUBLIC MethodType PAR_OUVRANTE TIVTIRepeat PAR_FERMANTE ACO_OUVRANTE VarDeclarationRepeat STATEMENTRepeat RETURN Expression POINT_VIRGULE error       { yyerror ("acolade fermant  manquante dans la line :"); YYABORT}
                        ;

TIVTIRepeat         :  Type VTIRepeat { isParam = false; level = 1;}
                    |epsilon               { isParam = false; level = 1;}
                    ;

VTIRepeat              :VT VTIRepeat
                        |epsilon;

VT                     :VIRGULE Type 
                        |error Type                   {yyerror ("VIRGULE manquant dans la line :"); YYABORT}     

STATEMENTRepeat		:STATEMENT STATEMENTRepeat 
                    |epsilon;

STATEMENT            :STATEMENTRepeat
                        |ACO_OUVRANTE STATEMENT ACO_FERMANTE STATEMENT
                        | error STATEMENT ACO_FERMANTE STATEMENT                                              { yyerror (" acolade ouvrant  manquant dans la line : "); YYABORT}
                        | ACO_OUVRANTE STATEMENT error STATEMENT                                               { yyerror (" acolade fermant  manquante dans la line :"); YYABORT}
                        | IF PAR_OUVRANTE Expression PAR_FERMANTE STATEMENT ELSE STATEMENT
                        | error PAR_OUVRANTE Expression PAR_FERMANTE STATEMENT ELSE STATEMENT               { yyerror (" If acolade  manquante dans la line : "); YYABORT} 
                        | IF error Expression PAR_FERMANTE STATEMENT ELSE STATEMENT                       { yyerror ("erreur parenthese ouvarnte  manquante dans la line : "); YYABORT}
                        | IF PAR_OUVRANTE Expression error STATEMENT ELSE STATEMENT                        { yyerror (" erreur parenthese fermante  manquante dans la line : "); YYABORT}
                        | IF PAR_OUVRANTE Expression PAR_FERMANTE STATEMENT error STATEMENT                 { yyerror (" mot cle ELSE errone ou bien manquant on line : "); YYABORT}
                        
                        | WHILE PAR_OUVRANTE Expression PAR_FERMANTE STATEMENT
                        | error PAR_OUVRANTE Expression PAR_FERMANTE STATEMENT                               { yyerror ("mot cle WHILE errone ou bien manquant on line : "); YYABORT}
                        | WHILE error Expression PAR_FERMANTE STATEMENT                                    { yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT}
                        | WHILE PAR_OUVRANTE Expression error STATEMENT                                     { yyerror ("  parenthese  fermante manquant dans la line: "); YYABORT}
                        
                        | PRINT PAR_OUVRANTE Expression PAR_FERMANTE POINT_VIRGULE
                        | error PAR_OUVRANTE Expression PAR_FERMANTE POINT_VIRGULE                              { yyerror ("system.out.println errone ou bien manquant on line :  "); YYABORT}
                        | PRINT error Expression PAR_FERMANTE POINT_VIRGULE                                     { yyerror (" parenthese  ouvrante manquant dans la line:"); YYABORT}
                        | PRINT PAR_OUVRANTE Expression error POINT_VIRGULE                                      { yyerror ("  parenthese  fermante manquant dans la line: "); YYABORT}
                        | PRINT PAR_OUVRANTE Expression PAR_FERMANTE error                                    { yyerror (" POINT_VIRGULE  manquant dans la line :"); YYABORT}
                       
                        | ID AFFECTATION Expression POINT_VIRGULE
                        {
                            check_declarations($1,ASSIGNMENT,VARIABLE,level,classID)
                        }
                        | error AFFECTATION Expression POINT_VIRGULE                                                { yyerror (" erreur identifier errone dans la line :  "); YYABORT}
                        | ID error Expression POINT_VIRGULE                                                { yyerror (" AFFECTATION errone dans la line : "); YYABORT}
                        | ID AFFECTATION Expression error                                                    { yyerror ("POINT_VIRGULE  manquant dans la line : "); YYABORT}
                       
                        | ID TAB_OUVRANTE Expression TAB_FERMANTE AFFECTATION Expression POINT_VIRGULE       
                        {
                            check_declarations($1,ASSIGNMENT,VARIABLE,level,classID)
                            
                        }
                        | error TAB_OUVRANTE Expression TAB_FERMANTE AFFECTATION Expression POINT_VIRGULE        { yyerror ("erreur identifier errone dans la line :"); YYABORT}
                        | ID error Expression TAB_FERMANTE AFFECTATION Expression POINT_VIRGULE               { yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT}
                        | ID TAB_OUVRANTE Expression error AFFECTATION Expression POINT_VIRGULE                { yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT}
                        | ID TAB_OUVRANTE Expression TAB_FERMANTE error Expression POINT_VIRGULE        { yyerror (" AFFECTATION errone dans la line :  "); YYABORT}
                        | ID TAB_OUVRANTE Expression TAB_FERMANTE AFFECTATION Expression error            { yyerror (" POINT_VIRGULE  manquant dans la line :  "); YYABORT}
                        ;


MainClass            : ClassScope ACO_OUVRANTE PUBLIC STATIC VOID MAIN PAR_OUVRANTE MainMethodParam PAR_FERMANTE ACO_OUVRANTE STATEMENTRepeat ACO_FERMANTE ACO_FERMANTE     
                        | ClassScope error PUBLIC STATIC VOID MAIN PAR_OUVRANTE MainMethodParam PAR_FERMANTE ACO_OUVRANTE STATEMENTRepeat ACO_FERMANTE ACO_FERMANTE      { yyerror (" acolade ouvrant manquant dans la line: "); YYABORT}
                        | ClassScope ACO_OUVRANTE error STATIC VOID MAIN PAR_OUVRANTE MainMethodParam PAR_FERMANTE ACO_OUVRANTE STATEMENTRepeat ACO_FERMANTE ACO_FERMANTE    { yyerror ("mot cle Public errone ou bien manquant on line :   "); YYABORT}
                        | ClassScope ACO_OUVRANTE PUBLIC error VOID MAIN PAR_OUVRANTE MainMethodParam PAR_FERMANTE ACO_OUVRANTE STATEMENTRepeat ACO_FERMANTE ACO_FERMANTE    { yyerror ("mot cle Static errone ou bien manquant on line : "); YYABORT}
                        | ClassScope ACO_OUVRANTE PUBLIC STATIC error MAIN PAR_OUVRANTE MainMethodParam PAR_FERMANTE ACO_OUVRANTE STATEMENTRepeat ACO_FERMANTE ACO_FERMANTE  { yyerror ("mot cle Void errone ou bien manquant on line : "); YYABORT}
                        | ClassScope ACO_OUVRANTE PUBLIC STATIC VOID error PAR_OUVRANTE MainMethodParam PAR_FERMANTE ACO_OUVRANTE STATEMENTRepeat ACO_FERMANTE ACO_FERMANTE  { yyerror ("mot cle Main errone ou bien manquant on line :  "); YYABORT}
                        | ClassScope ACO_OUVRANTE PUBLIC STATIC VOID MAIN error MainMethodParam PAR_FERMANTE ACO_OUVRANTE STATEMENTRepeat ACO_FERMANTE ACO_FERMANTE        { yyerror ("parenthese ouvrante manquante dans la line:  "); YYABORT}
                        | ClassScope ACO_OUVRANTE PUBLIC STATIC VOID MAIN PAR_OUVRANTE MainMethodParam error ACO_OUVRANTE STATEMENTRepeat ACO_FERMANTE ACO_FERMANTE         { yyerror ("  parenthese  fermant manquant dans la line: "); YYABORT}
                        | ClassScope ACO_OUVRANTE PUBLIC STATIC VOID MAIN PAR_OUVRANTE MainMethodParam PAR_FERMANTE error STATEMENTRepeat ACO_FERMANTE ACO_FERMANTE      { yyerror ("acolade ouvrant manquant dans la line:  "); YYABORT}
                        | ClassScope ACO_OUVRANTE PUBLIC STATIC VOID MAIN PAR_OUVRANTE MainMethodParam PAR_FERMANTE ACO_OUVRANTE error ACO_FERMANTE ACO_FERMANTE      { yyerror (" STATEMENT manquant on line :  "); YYABORT}
                        | ClassScope ACO_OUVRANTE PUBLIC STATIC VOID MAIN PAR_OUVRANTE MainMethodParam PAR_FERMANTE ACO_OUVRANTE STATEMENTRepeat error ACO_FERMANTE       { yyerror (" acolade fermant  manquant dans la line: "); YYABORT}
                        | ClassScope ACO_OUVRANTE PUBLIC STATIC VOID MAIN PAR_OUVRANTE MainMethodParam PAR_FERMANTE ACO_OUVRANTE STATEMENTRepeat ACO_FERMANTE error       { yyerror (" acolade fermant  manquant dans la line: "); YYABORT}
                        ;

MainMethodParam      : STRING TAB_OUVRANTE TAB_FERMANTE ID                                  
                        { 
                            insertSymbol("main",DECLARATION,METHOD,"void",0,classID);
                            set_param($4,strcat($1,"[]"));   
                        }
                        | error TAB_OUVRANTE TAB_FERMANTE ID                                 { yyerror ("mot cle String errone ou bien manquant on line :  "); YYABORT}
                        | STRING error TAB_FERMANTE ID                                       { yyerror ("acolade ouvrant manquant dans la line:  "); YYABORT}
                        | STRING TAB_OUVRANTE error ID                                        { yyerror (" acolade fermant  manquant dans la line:"); YYABORT}
                        | STRING TAB_OUVRANTE TAB_FERMANTE error                                { yyerror ("identifier errone dans la line :"); YYABORT}
                        ;
                    

ClassScope           : _CLASS ID     
                        {   
                            classID +=1; 
                            check_class($2,classID);
                        }
                        | error ID   { yyerror ("mot cle Class errone ou bien manquant on line :"); YYABORT}
                        | _CLASS error   { yyerror (" identifier errone dans la line : "); YYABORT}
                        ;



Type                 : DATATYPE ID
                        {
                            if(isParam)
                                set_param($2,$1);
                            else 
                                check_variable($2,$1,level,classID);
                                
                        }
                        | ID ID
                        {
                            if(isParam)
                                set_param($2,$1);
                            else 
                                check_variable($2,$1,level,classID);
                        }
                        | INT ID
                        {
                            if(isParam)
                                set_param($2,$1);
                            else 
                                check_variable($2,$1,level,classID);
                        }
                        | error ID                    { yyerror (" type non valide dans la ligne : "); YYABORT}
                        | ID error                    { yyerror (" identifier errone dans la line :"); YYABORT}
                        | DATATYPE error                 { yyerror (" identifier errone dans la line : "); YYABORT}
                        | INT error                  { yyerror ("identifier errone dans la line : "); YYABORT}
                        ;

MethodType           : DATATYPE ID
                        {
                            check_method($2,$1,classID);
                            isParam = true;
                        }
                        | ID ID
                        {
                            check_method($2,$1,classID);
                            isParam = true;
                        }
                        | INT ID
                        {
                            check_method($2,$1,classID);
                            isParam = true;
                        }
                        | error ID                    { yyerror (" type non valide dans la ligne :"); YYABORT}
                        | ID error                    { yyerror (" identifier errone dans la line : "); YYABORT}
                        | DATATYPE error                 { yyerror ("identifier errone dans la line : "); YYABORT}
                        | INT error                  { yyerror ("identifier errone dans la line :"); YYABORT}
                        ;









SectionC_E           : VIRGULE Expression SectionC_E  
                        | error Expression SectionC_E            { yyerror (" VIRGULE manquant dans la line : "); YYABORT}
                        |epsilon
                        ;

LogicOperator        : OPERATOR
                        | COMPOP
                        ;

MathOperator         : PLUS
                        | MOINS
                        | MULTIPLIER
                        | DIV
                        ;
                    
SectionE_SCE         : Expression SectionC_E 
                        {
                            method_call_index = -1;
                            expression_level=0;
                        }
                        |
                        {
                            method_call_index = -1;
                            expression_level=0;
                        }
                        ;

UseFunction          : POINT ID                                                                       
                        { 
                            method_call_index = insertSymbol($2,USE,METHOD,"DOT_IDENT",0,classID);
                        }
                        | error ID                                                                   { yyerror (" POINT manquant dans la line : "); YYABORT}
                        | POINT  error                                                                    { yyerror ("identifier errone dans la line :  "); YYABORT}
                        ;

Expression           : Expression
                        { 
                            if(method_call_index != -1) {
                                remove_param(method_call_index);
                            }
                        } 
                        MathOperator Expression
                        {
                            if(method_call_index != -1){
                                remove_param(method_call_index);
                                insert_param(method_call_index,"EXP","int");
                            }                              
                        }
                        | Expression
                        { 
                            if(method_call_index != -1) {
                                remove_param(method_call_index);
                            }
                        } 
                        LogicOperator Expression
                        {
                          
                            if(method_call_index != -1) {
                                remove_param(method_call_index);
                                insert_param(method_call_index,"EXP","bool");
                            }
                                
                        }
                        | Expression error Expression                                                    { yyerror (" Comparison operator manquant dans la line : "); YYABORT}
                        | Expression TAB_OUVRANTE Expression TAB_FERMANTE
                        {
                            
                            if(method_call_index != -1) {
                                insert_param(method_call_index,"EXP","int[]");
                            }
      
                        }
                        | Expression error Expression TAB_FERMANTE                                     { yyerror (" erreur tabulation ouvrante manquante dans la line : "); YYABORT}
                        | Expression TAB_OUVRANTE Expression error                                      { yyerror ("erreur tabulation fermante manquante dans la line : "); YYABORT}
                        | Expression POINT LENGTH
                        {
                            if(method_call_index != -1) {
                                insert_param(method_call_index,"EXP","int");
                            }
                
                        }
                        | Expression error LENGTH                                                       { yyerror (" POINT manquant dans la line : "); YYABORT}
                        | Expression POINT error                                                          { yyerror ("LONGEUR manquant dans la line :"); YYABORT}
                        | Expression UseFunction PAR_OUVRANTE SectionE_SCE PAR_FERMANTE  
                        | Expression UseFunction error SectionE_SCE PAR_FERMANTE                         { yyerror ("parenthese ouvrante manquante dans la line: "); YYABORT}
                        | Expression UseFunction PAR_OUVRANTE SectionE_SCE error                          { yyerror ("parenthese  fermant manquant dans la line: "); YYABORT}
                        | NUMBER           
                        {
                            if(method_call_index != -1 && expression_level < 1) 
                                insert_param(method_call_index,$1,"int");
                        }                                                       
                        | MOINS NUMBER
                        {
                            
                            if(method_call_index != -1 && expression_level < 1) 
                                insert_param(method_call_index,strcat("-",$2),"int");
                        }                                                         
                        | BOOL
                        {
                            if(method_call_index != -1 && expression_level < 1) 
                                insert_param(method_call_index,$1,"bool");
                        }                                                                      
                        | ID
                        {

                            if(method_call_index != -1 && expression_level < 1) 
                              insert_param(method_call_index,$1,"IDENT");

                            check_declarations($1,USE,VARIABLE,level,classID)
                        }
                        | THIS
                        | NEW INT TAB_OUVRANTE Expression TAB_FERMANTE
                        | error INT TAB_OUVRANTE Expression TAB_FERMANTE                             { yyerror ("erreur mot cle New errone dans la line:   "); YYABORT}
                        | NEW error TAB_OUVRANTE Expression TAB_FERMANTE                                 { yyerror ("erreur mot cle Integer errone dans la line:  "); YYABORT}
                        | NEW INT error Expression TAB_FERMANTE                                      { yyerror ("erreur tabulation ouvrante manquante dans la line : "); YYABORT}
                        | NEW INT TAB_OUVRANTE Expression error                                   { yyerror (" erreur tabulation fermante manquante dans la line :  "); YYABORT}
                        | NEW ID PAR_OUVRANTE PAR_FERMANTE
                        {
                            insertSymbol($2,INSTANTIATION,VARIABLE,"NewID",0,classID);                          
                        }
                        | error ID PAR_OUVRANTE PAR_FERMANTE                                          { yyerror ("erreur mot cle New errone dans la line:  "); YYABORT}
                        | NEW error PAR_OUVRANTE PAR_FERMANTE                                            { yyerror ("  erreur identifier errone dans la line : "); YYABORT}
                        | NEW ID error PAR_FERMANTE                                                 { yyerror ("erreur parenthese ouvarnte  manquante dans la line : "); YYABORT}
                        | NEW ID PAR_OUVRANTE error                                                  { yyerror (" erreur parenthese fermante  manquante dans la line : "); YYABORT}
                        | NOT Expression
                        | error Expression                                                               { yyerror ("erreur Not manquant dans la line :  "); YYABORT}
                        | PAR_OUVRANTE Expression PAR_FERMANTE
                        | error Expression PAR_FERMANTE                                                  { yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT}
                        | PAR_OUVRANTE Expression error                                                   { yyerror (" erreur parenthese fermante  manquante dans la line :"); YYABORT}
                        | error                                                                          { yyerror (" valeur manquante dans la ligne :  "); YYABORT}
                        ;

epsilon			        :

                        
%% 

    int yyerror(char const *msg) {
        
        fprintf(stderr, "%s %d\n", msg,line);
        return 0;
    }

    extern FILE *yyin;

    int main()
    {
        yyparse();
    }