#ifndef SEMANTIQUEANALYSER_H
#define SEMANTIQUEANALYSER_H

#include "stdio.h"
#include <stdlib.h>
#include <string.h>

#define PARAM_LENGTH 100

typedef enum
{
    CLASSE_UNKNOWN,
    VARIABLE,
    METHOD,
    CLASS
} Symbol_Class;

typedef enum
{
    DECLARATION,
    PARAMETER,
    INSTANTIATION,
    USE,
    ASSIGNMENT,
    EXTENSION
} Symbol_Usage;

extern int line;

typedef struct node
{
    char *name;          // name of the variable
    Symbol_Usage usage;  // type of usage of the variable
    Symbol_Class classe; // kind of the variable
    char *type;          // type of the variable or the return type of a function
    int initialized;
    int level;
    char *params_types[PARAM_LENGTH];
    char *params_names[PARAM_LENGTH];
    int params_init[PARAM_LENGTH];
    int param_index;
    int classID;
    int line;

} NODE;

int insertSymbol(char *name, Symbol_Usage usage, Symbol_Class classe, char *type, int level, int classID);

void insert_param(int index, char *val, char *type);

void set_param(char *name, char *type);

int remove_param(int index);

// check
void check_main(void);

void check_variable(char *name, char *type, int level, int classID);

void check_class(char *name, int classID);

void check_method(char *name, char *return_type, int classID);

void check_declarations(char *name, Symbol_Usage usage, Symbol_Class classe, int level, int classID);

#endif