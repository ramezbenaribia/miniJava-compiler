%{
     #include <stdio.h>	
     #include <stdlib.h>	
     #include <string.h>
     #include "SyntaxicAnalyser.tab.h"	                                                                         	
     #include <math.h>	
     
     #define YYSTYPE char*

     int line = 1;
%}

%option yylineno


delim                                   ([ \t]|(" "))
bl                                      {delim}+
bl_0                                     {delim}*
nbN                                 [0-9]
nbN0                                [1-9]
boolean                                 "true"|"false"                                                                 
id                              ([A-Za-z_][A-Za-z0-9_]*)                                                     
integer                          ({nbN0}{nbN}*)                                                          
iderrone                       [0-9][A-Za-z0-9_]*     
comment_ouvrant "/*"
comment_fermant "*/"
doubleQuote \"
singleQuote \'


paraouvrante                         (\()
parafermante                        (\))
acououvrante                              (\{)
acoufermante                             (\})
tabouvrante                      (\[)
tabfermante                     (\])

COMMENT_LINE        "//"+([^\n])+"\n"

                                            

dataType                                {primtiveType}|tableType                                                        
primtiveType                            "int"|"boolean"|"String"|"byte"|"char"|"short"|"long"|"float"|"double"  
tableType                               ({primtiveType}{bl}{tabouvrante}{bl_0}{tabfermante})

%%   

{bl}                                    /* pas d'actions */

"\n"                                    line++;

"public"                                { yylval = (int)strdup(yytext); return  PUBLIC;            }
"static"                                { yylval = (int)strdup(yytext); return  STATIC;            }
"class"                                 { yylval = (int)strdup(yytext); return  _CLASS;             }
"void"                                  { yylval = (int)strdup(yytext); return  VOID;              }

"main"                                  { yylval = (int)strdup(yytext); return  MAIN;              }
"extends"                               { yylval = (int)strdup(yytext); return  EXTENDS;           }
"return"                                { yylval = (int)strdup(yytext); return  RETURN;            }
"System.out.println"                    { yylval = (int)strdup(yytext); return  PRINT;               }
"length"                                { yylval = (int)strdup(yytext); return  LENGTH;            }
"this"                                  { yylval = (int)strdup(yytext); return  THIS;              }
"new"                                   { yylval = (int)strdup(yytext); return  NEW;               }

"if"                                    { yylval = (int)strdup(yytext); return  IF;                }
"else"                                  { yylval = (int)strdup(yytext); return  ELSE;              }
"while"                                 { yylval = (int)strdup(yytext); return  WHILE;             }

"int"                                   { yylval = (int)strdup(yytext); return  INT;           }
(in|i|it|nt)                                   { yylval = (int)strdup(yytext); return  INT_ERROR;           }
"String"                                { yylval = (int)strdup(yytext); return  STRING;            }
(string|strin|tring|sring|strng|strig)  { yylval = (int)strdup(yytext); return  STRING_ERROR;           }
{dataType}                              { yylval = (int)strdup(yytext); return  DATATYPE;          }

{singleQuote}                                  { yylval = (int)strdup(yytext); return  SINGLEQUOTE;        }
{doubleQuote}                                  { yylval = (int)strdup(yytext); return  DOUBLEQUOTE;        }
{paraouvrante}                       { yylval = (int)strdup(yytext); return  PAR_OUVRANTE;        }
{parafermante}                      { yylval = (int)strdup(yytext); return  PAR_FERMANTE;       }
{acououvrante}                            { yylval = (int)strdup(yytext); return  ACO_OUVRANTE;          }
{acoufermante}                           { yylval = (int)strdup(yytext); return  ACO_FERMANTE;         }
{tabouvrante}                    { yylval = (int)strdup(yytext); return  TAB_OUVRANTE;      }
{tabfermante}                   { yylval = (int)strdup(yytext); return  TAB_FERMANTE;     }

"&&"                                    { yylval = (int)strdup(yytext); return  OPERATOR;               }
"||"                                    { yylval = (int)strdup(yytext); return  OPERATOR;                }

"."                                     { yylval = (int)strdup(yytext); return  POINT;               }
";"                                     { yylval = (int)strdup(yytext); return  POINT_VIRGULE;         }
","                                     { yylval = (int)strdup(yytext); return  VIRGULE;             }



"+"                                     { yylval = (int)strdup(yytext); return  PLUS;              }
"-"                                     { yylval = (int)strdup(yytext); return  MOINS;             }
"*"                                     { yylval = (int)strdup(yytext); return  MULTIPLIER;          }
"!"                                     { yylval = (int)strdup(yytext); return  NOT;               }
"="                                     { yylval = (int)strdup(yytext); return  AFFECTATION;             }
"\/"                                    { yylval = (int)strdup(yytext); return  DIV;               }

"<"|">"|"<="|">="|"=="|"!="             { yylval = (int)strdup(yytext); return  COMPOP;            }


 
{boolean}                        { yylval = (int)strdup(yytext); return  BOOL;         }
{integer}                        { yylval = (int)strdup(yytext); return  NUMBER;      }
{id}                            { yylval = (int)strdup(yytext); return  ID;             }
{iderrone}                     { printf("\nLEXICAL ERROR on character %d (line %d): Illegal Identifier\n\n", yytext[0], line);   }



{COMMENT_LINE}                                  {   /* skip */   }

{comment_ouvrant}                                    {
                                             int isComment = 1;
                                             char c;
                                             while(isComment) {
                                                  c = input();
                                                  if(c == '*') {
                                                       char ch = input();
                                                       if(ch == '/') isComment = 0;
                                                       else unput(ch);
                                                  }
                                                  else if(c == '\n') line++;
                                                  else if(c == EOF) {
                                                       printf("\n Erreur Lexical (line %d):  commentaire n'est pas termine ", line);
                                                       isComment = 0;
                                                  }
                                             }
                                        }

{comment_fermant}                                 { yylval = (int)strdup(yytext); printf("\n Erreur Lexical dans le  character %d (line %d)\n\n", yytext[0], line);   }

.                                     { yylval = (int)strdup(yytext); printf("\n Erreur Lexical dans le  character %d (line %d)\n\n", yytext[0], line);   }

%%

int yywrap()
{
	return(1);
}
