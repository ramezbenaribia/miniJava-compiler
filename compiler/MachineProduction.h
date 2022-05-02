#ifndef MACHINEPRODUCTION_H
#define MACHINEPRODUCTION_H

#include "stdio.h"
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

extern int node_vide;

typedef struct
{
    char *code_op;
    int operande;
    char *nomFct;
} ENTREE_CODE;

void creerTabCodeInt();
void genCode(char *code_op, int operande, char *nomFct);

void add_while_statement(char *code_op, int operande, char *nomFct);

void add_variable(char *code_op, char *ID, char *nomFct);

void add_method(char *code_op, int ID, char *nomFct);

void affichage();

#endif