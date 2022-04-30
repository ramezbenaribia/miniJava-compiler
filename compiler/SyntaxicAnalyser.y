%{
	
    #include <stdio.h>
    #include <string.h>
    #include <stdbool.h>
    #include "SemantiqueAnalyser.h"
    #include "MachineProduction.h"
	
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
    
%token  INF      
%token  INFE      
%token  SUP      
%token  SUPE      
%token  DIF      
%token  EGAL
%token  BOOL   
%token  NUMBER
%token  ID   


%start program

%%

program              : {
                            creerTabCodeInt();
                        }
                        MainClass ClassDeclarationRepeat           
                        { 
                            check_main(); 
                            printf("************************* MACHINE CODE ***************** \n");
                            affichage();
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
        		        |Type  AFFECTATION  error POINT_VIRGULE  {yyerror ("valeur manquante  dans la line :"); YYABORT} ;
                        |ID AFFECTATION  NUMBER POINT_VIRGULE
                        {
                            add_variable("LDC",$3,"");
                            add_variable("STORE",$1,"");

                        }
                        |ADDITIONOPERATION
                        |SUBTRACTINGOPERATION
                        |MULTIPLICATIONOPERATION
                        |DIVISONOPERATION
                        ;  

ADDITIONOPERATION       :   ID AFFECTATION  NUMBER PLUS NUMBER POINT_VIRGULE
                             {
                                add_variable("LDC",$3,"");
                                add_variable("LDC",$5,"");
                                genCode("ADD", 0 , "OPERATION"); 
                                add_variable("STORE",$1,"");

                            } 
                        |ID AFFECTATION  ID PLUS NUMBER POINT_VIRGULE
                            {
                                add_variable("LDV",$3,"");
                                add_variable("LDC",$5,"");
                                genCode("ADD", 0 , "OPERATION"); 
                                add_variable("STORE",$1,"");
                            } 
                        |ID AFFECTATION NUMBER  PLUS  ID  POINT_VIRGULE
                            {
                                add_variable("LDC",$3,"");
                                add_variable("LDV",$5,"");
                                genCode("ADD", 0 , "OPERATION"); 
                                add_variable("STORE",$1,"");
                            }
                        |ID AFFECTATION  ID PLUS ID POINT_VIRGULE
                            {
                                add_variable("LDV",$3,"");
                                add_variable("LDV",$5,"");
                                genCode("ADD", 0 , "OPERATION"); 
                                add_variable("STORE",$1,"");
                            }
                        ;

SUBTRACTINGOPERATION       :   ID AFFECTATION  NUMBER MOINS NUMBER POINT_VIRGULE
                             {
                                add_variable("LDC",$3,"");
                                add_variable("LDC",$5,"");
                                genCode("SUB", 0 , "OPERATION"); 
                                add_variable("STORE",$1,"");

                            } 
                        |ID AFFECTATION  ID MOINS NUMBER POINT_VIRGULE
                            {
                                add_variable("LDV",$3,"");
                                add_variable("LDC",$5,"");
                                genCode("SUB", 0 , "OPERATION"); 
                                add_variable("STORE",$1,"");
                            } 
                        |ID AFFECTATION NUMBER  MOINS  ID  POINT_VIRGULE
                            {
                                add_variable("LDC",$3,"");
                                add_variable("LDV",$5,"");
                                genCode("SUB", 0 , "OPERATION"); 
                                add_variable("STORE",$1,"");
                            }
                        |ID AFFECTATION  ID MOINS ID POINT_VIRGULE
                            {
                                add_variable("LDV",$3,"");
                                add_variable("LDV",$5,"");
                                genCode("SUB", 0 , "OPERATION"); 
                                add_variable("STORE",$1,"");
                            }
                        ;



MULTIPLICATIONOPERATION       :   ID AFFECTATION  NUMBER MULTIPLIER NUMBER POINT_VIRGULE
                             {
                                add_variable("LDC",$3,"");
                                add_variable("LDC",$5,"");
                                genCode("MUL", 0 , "OPERATION"); 
                                add_variable("STORE",$1,"");

                            } 
                        |ID AFFECTATION  ID MULTIPLIER NUMBER POINT_VIRGULE
                            {
                                add_variable("LDV",$3,"");
                                add_variable("LDC",$5,"");
                                genCode("MUL", 0 , "OPERATION"); 
                                add_variable("STORE",$1,"");
                            } 
                        |ID AFFECTATION NUMBER  MULTIPLIER  ID  POINT_VIRGULE
                            {
                                add_variable("LDC",$3,"");
                                add_variable("LDV",$5,"");
                                genCode("MUL", 0 , "OPERATION"); 
                                add_variable("STORE",$1,"");
                            }
                        |ID AFFECTATION  ID MULTIPLIER ID POINT_VIRGULE
                            {
                                add_variable("LDV",$3,"");
                                add_variable("LDV",$5,"");
                                genCode("MUL", 0 , "OPERATION"); 
                                add_variable("STORE",$1,"");
                            }
                        ;



DIVISONOPERATION       :   ID AFFECTATION  NUMBER DIV NUMBER POINT_VIRGULE
                             {
                                add_variable("LDC",$3,"");
                                add_variable("LDC",$5,"");
                                genCode("DIV", 0 , "OPERATION"); 
                                add_variable("STORE",$1,"");

                            } 
                        |ID AFFECTATION  ID DIV NUMBER POINT_VIRGULE
                            {
                                add_variable("LDV",$3,"");
                                add_variable("LDC",$5,"");
                                genCode("DIV", 0 , "OPERATION"); 
                                add_variable("STORE",$1,"");
                            } 
                        |ID AFFECTATION NUMBER  DIV  ID  POINT_VIRGULE
                            {
                                add_variable("LDC",$3,"");
                                add_variable("LDV",$5,"");
                                genCode("DIV", 0 , "OPERATION"); 
                                add_variable("STORE",$1,"");
                            }
                        |ID AFFECTATION  ID DIV ID POINT_VIRGULE
                            {
                                add_variable("LDV",$3,"");
                                add_variable("LDV",$5,"");
                                genCode("DIV", 0 , "OPERATION"); 
                                add_variable("STORE",$1,"");
                            }
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
                        |ID
                        | error ID                    { yyerror (" type non valide dans la ligne : "); YYABORT}
                        | ID error                    { yyerror ("Type:1 identifier errone dans la line :"); YYABORT}
                        | DATATYPE error                 { yyerror ("Type: identifier errone dans la line : "); YYABORT}
                        | INT error                  { yyerror ("Type: identifier errone dans la line : "); YYABORT}

                        ;
                       
QUOTE               :DOUBLEQUOTE 
                    |SINGLEQUOTE   



MethodDeclarationRepeat	:MethodDeclaration MethodDeclarationRepeat	
                        |epsilon;                              

MethodDeclaration    : PUBLIC MethodType PAR_OUVRANTE TIVTIRepeat PAR_FERMANTE ACO_OUVRANTE VarDeclarationRepeat STATEMENTRepeat RETURN Expression POINT_VIRGULE ACO_FERMANTE      
                        |PUBLIC MethodType PAR_OUVRANTE TIVTIRepeat PAR_FERMANTE ACO_OUVRANTE VarDeclarationRepeat STATEMENTRepeat VarDeclarationRepeat RETURN Expression POINT_VIRGULE ACO_FERMANTE      
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

IFSTATEMENT         :STATEMENTRepeat
                    {
                        genCode("SIFAUX",line+1,"");
                    }
                    ;


ELSESTATEMENT         :STATEMENTRepeat
                    {
                        genCode("SAUT",line+1,"");
                    }
                    ;
                

WHILETRUESTATEMENT         :STATEMENTRepeat
                    {
                        add_while_statement("TANQUEFAUX",line +1,"");
                    }
                    ;


STATEMENT            :STATEMENTRepeat
                      
            | IF PAR_OUVRANTE  Expression PAR_FERMANTE ACO_OUVRANTE IFSTATEMENT ACO_FERMANTE ELSE ACO_OUVRANTE ELSESTATEMENT ACO_FERMANTE
            
            | error PAR_OUVRANTE Expression PAR_FERMANTE ACO_OUVRANTE IFSTATEMENT ACO_FERMANTE ELSE ACO_OUVRANTE ELSESTATEMENT ACO_FERMANTE
                    { yyerror (" If acolade  manquante dans la line : "); YYABORT} 
            | IF error Expression PAR_FERMANTE ACO_OUVRANTE IFSTATEMENT ACO_FERMANTE ELSE ACO_OUVRANTE ELSESTATEMENT ACO_FERMANTE                     { yyerror ("erreur parenthese ouvarnte  manquante dans la line : "); YYABORT}
            | IF PAR_OUVRANTE Expression error ACO_OUVRANTE IFSTATEMENT ACO_FERMANTE ELSE ACO_OUVRANTE ELSESTATEMENT ACO_FERMANTE                        { yyerror (" erreur parenthese fermante  manquante dans la line : "); YYABORT}
            | IF PAR_OUVRANTE Expression PAR_FERMANTE ACO_OUVRANTE IFSTATEMENT ACO_FERMANTE  error ACO_OUVRANTE ELSESTATEMENT ACO_FERMANTE                  { yyerror (" mot cle ELSE errone ou bien manquant on line : "); YYABORT}
           
            | IF PAR_OUVRANTE  Expression PAR_FERMANTE ACO_OUVRANTE IFSTATEMENT ACO_FERMANTE ELSE error ELSESTATEMENT ACO_FERMANTE                   { yyerror ("erreur acolade ouvarnte  manquante dans la line : "); YYABORT}
            | IF PAR_OUVRANTE  Expression PAR_FERMANTE ACO_OUVRANTE IFSTATEMENT ACO_FERMANTE ELSE ACO_OUVRANTE ELSESTATEMENT error               { yyerror ("erreur acolade ouvarnte  manquante dans la line : "); YYABORT}
            
            | WHILE PAR_OUVRANTE Expression PAR_FERMANTE ACO_OUVRANTE 
            {

                        genCode("TANQUE",line +1,"");

            }
            WHILETRUESTATEMENT ACO_FERMANTE
            | error PAR_OUVRANTE Expression PAR_FERMANTE STATEMENT                               { yyerror ("mot cle WHILE errone ou bien manquant on line : "); YYABORT}
            | WHILE error Expression PAR_FERMANTE STATEMENT                                    { yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT}
            | WHILE PAR_OUVRANTE Expression error STATEMENT                                     { yyerror ("  parenthese  fermante manquant dans la line: "); YYABORT}
            
            | PRINT PAR_OUVRANTE Expression PAR_FERMANTE POINT_VIRGULE
            | error PAR_OUVRANTE Expression PAR_FERMANTE POINT_VIRGULE                              { yyerror ("system.out.println errone ou bien manquant on line :  "); YYABORT}
            | PRINT error Expression PAR_FERMANTE POINT_VIRGULE                                     { yyerror (" parenthese  ouvrante manquant dans la line:"); YYABORT}
            | PRINT PAR_OUVRANTE Expression error POINT_VIRGULE                                      { yyerror ("  parenthese  fermante manquant dans la line: "); YYABORT}
            | PRINT PAR_OUVRANTE Expression PAR_FERMANTE error                                    { yyerror (" POINT_VIRGULE  manquant dans la line :"); YYABORT}
                       
            |ADDITIONOPERATION
            |SUBTRACTINGOPERATION
            |MULTIPLICATIONOPERATION
            |DIVISONOPERATION
            | ID AFFECTATION Expression POINT_VIRGULE
            {
                check_declarations($1,ASSIGNMENT,VARIABLE,level,classID);
                add_variable("STORE",$1,"");
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
                        | VOID ID
                        {
                            check_method($2,$1,classID);
                            isParam = true;
                        }
                        | error ID                    { yyerror (" type non valide dans la ligne :"); YYABORT}
                        | ID error                    { yyerror (" MethodType :identifier errone dans la line : "); YYABORT}
                        | DATATYPE error                 { yyerror ("MethodType :identifier errone dans la line : "); YYABORT}
                        | INT error                  { yyerror ("MethodType: identifier errone dans la line :"); YYABORT}
                        ;









SectionC_E           : VIRGULE Expression SectionC_E  
                        | error Expression SectionC_E            { yyerror (" VIRGULE manquant dans la line : "); YYABORT}
                        |epsilon
                        ;

LogicOperator        : OPERATOR
                        |NUMBER COMPOP NUMBER{
                            add_variable("LDC",$1,"");
                            add_variable("LDC",$3,"");
                            add_variable($2, 0 , "OPERATION_COMP"); 
                        }
                        |ID COMPOP NUMBER{
                            add_variable("LDV",$1,"");
                            add_variable("LDC",$3,"");
                            add_variable($2, 0 , "OPERATION_COMP"); 
                        }
                        | NUMBER COMPOP  ID{
                            add_variable("LDC",$1,"");
                            add_variable("LDV",$3,"");
                            add_variable($2, 0 , "OPERATION_COMP"); 
                        }   
                        | ID COMPOP  ID{
                            add_variable("LDV",$1,"");
                            add_variable("LDV",$3,"");
                            add_variable($2, 0 , "OPERATION_COMP"); 
                        }
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
                        |  LogicOperator 
                        
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
                            add_variable("LDC",$1,"");
                            
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
                        |QUOTE ID QUOTE
                        |QUOTE ID error {yyerror ("  QUOTE FERMANTE    manquante  dans la line :"); YYABORT}
                        |error ID QUOTE {yyerror ("  QUOTE  OUVRANTE manquante  dans la line :"); YYABORT}  

                        | ID
                        {

                            if(method_call_index != -1 && expression_level < 1) 
                              insert_param(method_call_index,$1,"IDENT");

                            check_declarations($1,USE,VARIABLE,level,classID);
                            // add_variable("LDV",$1,"");

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