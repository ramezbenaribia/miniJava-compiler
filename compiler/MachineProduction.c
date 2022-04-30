
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "SemantiqueAnalyser.h"

#include "MachineProduction.h"

#define TABCODEINT_LENGTH 100
#define SYMBOL_TABLE_LENGTH 500

ENTREE_CODE *tabCodeInt;
int tabCodeInt_Index = 0;

extern int node_vide;

void creerTabCodeInt()
{
    tabCodeInt = (ENTREE_CODE *)malloc(TABCODEINT_LENGTH * sizeof(ENTREE_CODE));
}

void genCode(char *code_op, int operande, char *nomFct)
{
    tabCodeInt[tabCodeInt_Index].code_op = code_op;
    tabCodeInt[tabCodeInt_Index].operande = operande;
    tabCodeInt[tabCodeInt_Index].nomFct = nomFct;
    tabCodeInt_Index++;
}

void add_while_statement(char *code_op, int operande, char *nomFct)
{
    int i;
    for (i = 0; i < tabCodeInt_Index; i++)
    {
        if (strcmp(tabCodeInt[i].code_op, "TANQUE") == 0)
        {
            tabCodeInt[tabCodeInt_Index] = tabCodeInt[i];
            tabCodeInt[i].code_op = code_op;
            tabCodeInt[i].operande = operande;
            tabCodeInt[i].nomFct = nomFct;
            tabCodeInt_Index++;
            break;
        }
    }
}

void check_opreator_com(char *code_op)
{
    if (strcmp(code_op, "<") == 0)
    {
        genCode("INF", 0, "OPERATION");
    }
    else if (strcmp(code_op, "<=") == 0)
    {
        genCode("INFE", 0, "OPERATION");
    }
    else if (strcmp(code_op, ">") == 0)
    {
        genCode("SUP", 0, "OPERATION");
    }
    else if (strcmp(code_op, ">=") == 0)
    {
        genCode("SUPE", 0, "OPERATION");
    }
    else if (strcmp(code_op, "!=") == 0)
    {
        genCode("DIF", 0, "OPERATION");
    }
    else if (strcmp(code_op, "==") == 0)
    {
        genCode("EGAL", 0, "OPERATION");
    }
}

void add_variable(char *code_op, char *ID, char *nomFct)
{
    if (strcmp(code_op, "LDC") == 0)
    {
        int number = atoi(ID);
        genCode(code_op, number, nomFct);
    }
    else if (strcmp(nomFct, "OPERATION_COMP") == 0)
    {
        check_opreator_com(code_op);
    }

    else
    {

        int i;
        for (i = 0; i < node_vide; i++)
        {
            if (strcmp(symbol_table[i].name, ID) == 0)
            {
                genCode(code_op, i, nomFct);
                break;
            }
        }
    }
}

void affichage()
{
    int i;
    for (i = 0; i < tabCodeInt_Index; i++)
    {

        if (strcmp(tabCodeInt[i].nomFct, "OPERATION") == 0)
        {
            printf("%s  \n", tabCodeInt[i].code_op);
        }
        else
        {

            printf("%s %d  %s \n", tabCodeInt[i].code_op, tabCodeInt[i].operande, tabCodeInt[i].nomFct);
        }
    }

    // printf("\n");
    // for (i = 0; i < node_vide; i++)
    // {
    //     printf("\n name  %s", symbol_table[i].name);
    // }
}