
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "SemantiqueAnalyser.h"

extern int line;
int node_vide = 0;

int insertSymbol(char *name, Symbol_Usage usage, Symbol_Class classe, char *type, int level, int classID)
{

    int index = node_vide++;
    symbol_table[index].name = name;
    symbol_table[index].usage = usage;
    symbol_table[index].classe = classe;
    symbol_table[index].type = type;
    symbol_table[index].level = level;
    symbol_table[index].classID = classID;

    if (((classe == VARIABLE) || (classe == METHOD)) && (usage == DECLARATION))
    {
        symbol_table[index].initialized = 0;
    }
    else
        symbol_table[index].initialized = -1;
    symbol_table[index].param_index = 0;
    symbol_table[index].line = line;
    return index;
}

int remove_param(int index)
{
    NODE *method = &symbol_table[index];
    method->param_index--;
}

void set_param(char *name, char *type)
{
    // check if param already exists
    NODE *node_instnace = &symbol_table[node_vide - 1];
    int index = node_instnace->param_index;

    if (index != 0)
    {
        for (int i = 0; i < index; i++)
        {
            if (strcmp(node_instnace->params_names[i], name) == 0)
            {
                printf("ligne: %d : Erreur de compilation! le  parameter de cette method ' %s ' est deja declare !", line, name);
                exit(EXIT_FAILURE);
            }
        }
    }
    node_instnace->params_names[node_instnace->param_index] = name;
    node_instnace->params_types[node_instnace->param_index] = type;
    node_instnace->param_index = node_instnace->param_index + 1;
}

void insert_param(int f_index, char *val, char *type)
{
    NODE *node_instnace = &symbol_table[f_index];
    int index = node_instnace->param_index;
    char *ident_type = "";
    if (strcmp(type, "ID") == 0)
    {
        int i = f_index - 1;
        int test = 0;
        while (symbol_table[i].classID == node_instnace->classID)
        {
            if (strcmp(val, symbol_table[i].name) == 0 && (symbol_table[i].usage == DECLARATION))
            {
                ident_type = symbol_table[i].type;
                test = 1;
                break;
            }
            i--;
        }
        if (test == 0)
        {
            printf("ligne: %d : Erreur de compilation! Variable ' %s ' n'est pas defini  !", line, val);
            exit(EXIT_FAILURE);
        }
    }

    node_instnace->params_names[node_instnace->param_index] = val;
    if (strcmp(type, "ID") != 0)
        node_instnace->params_types[node_instnace->param_index] = type;
    else
        node_instnace->params_types[node_instnace->param_index] = ident_type;
    node_instnace->param_index = node_instnace->param_index + 1;
}

void check_variable(char *name, char *type, int level, int classID)
{
    if (level == 0)
    {
        int i = node_vide - 1;
        while (symbol_table[i].classe == VARIABLE)
        {
            if (strcmp(symbol_table[i].name, name) == 0)
            {
                printf("ligne: %d : Erreur de compilation! La Variable est deja declare!", line);
                exit(EXIT_FAILURE);
            }
            else
            {
                i--;
            }
        }
    }
    else if (level == 1)
    {
        int i = node_vide - 1;
        while (symbol_table[i].classe == VARIABLE)
        {
            if (strcmp(symbol_table[i].name, name) == 0)
            {
                printf("ligne: %d : Erreur de compilation! La Variable est deja declare !", line);
                exit(EXIT_FAILURE);
            }
            else
                i--;
        }
        NODE *node_instnace = &symbol_table[i];
        for (int j = 0; j < node_instnace->param_index; j++)
        {
            if (strcmp(node_instnace->params_names[j], name) == 0)
            {
                printf("ligne: %d : Erreur de compilation! La Variable est deja declare dans la methode  ' %s ' !", line, node_instnace->name);
                exit(EXIT_FAILURE);
            }
        }
    }
    insertSymbol(name, DECLARATION, VARIABLE, type, level, classID);
}

void check_class(char *name, int classID)
{
    if (node_vide == 0)
    {
        insertSymbol(name, DECLARATION, CLASS, "NOTYPE", 0, classID);
    }
    else
    {
        for (int i = node_vide - 1; i >= 0; i--)
        {
            if ((symbol_table[i].classe == CLASS) && (symbol_table[i].usage == DECLARATION) && strcmp(symbol_table[i].name, name) == 0)
            {
                printf("ligne: %d : Erreur de compilation! Cette Class ' %s ' est deja declare!", line, name);
                exit(EXIT_FAILURE);
            }
        }
        insertSymbol(name, DECLARATION, CLASS, "ID", 0, classID);
    }
}

void check_method(char *name, char *return_type, int classID)
{
    insertSymbol(name, DECLARATION, METHOD, return_type, 0, classID);
}

void check_override()
{
    for (int i = 0; i <= node_vide - 1; i++)
    {
        if ((symbol_table[i].classe == METHOD) && (symbol_table[i].usage == DECLARATION))
        {
            NODE *dec1 = &symbol_table[i];
            for (int j = i + 1; j <= node_vide - 1; j++)
            {
                if ((symbol_table[j].classe == METHOD) && (symbol_table[j].usage == DECLARATION) && strcmp(symbol_table[i].name, symbol_table[j].name) == 0 && symbol_table[i].classID == symbol_table[j].classID)
                {
                    NODE *dec2 = &symbol_table[j];
                    int test = 1;
                    if (dec1->param_index == dec2->param_index)
                    {
                        for (int k = 0; k < dec1->param_index; k++)
                        {
                            if (strcmp(dec1->params_types[k], dec2->params_types[k]) != 0)
                            {
                                test = 0;
                                break;
                            }
                        }
                    }
                    else
                        break;
                    if (strcmp(dec1->type, dec2->type) == 0 && test == 1)
                    {
                        printf("ligne: %d : Erreur de compilation! la methode ' %s ' est deja declare!", dec2->line, dec2->name);
                        exit(EXIT_FAILURE);
                    }
                }
            }
        }
    }
}

void check_declarations(char *name, Symbol_Usage usage, Symbol_Class classe, int level, int classID)
{

    int i = node_vide - 1;
    int test = 0;
    for (i; i >= 0; i--)
    {
        if (symbol_table[i].classID == classID && (symbol_table[i].usage == DECLARATION))
        {
            if (symbol_table[i].classe == METHOD)
            {

                for (int j = 0; j < symbol_table[i].param_index; j++)
                {
                    if (strcmp(symbol_table[i].params_names[j], name) == 0)
                    {
                        NODE *method = &symbol_table[i];
                        method->params_init[j]++;
                        insertSymbol(name, usage, classe, "NOTYPE", level, classID);
                        test = 1;
                        break;
                    }
                }
            }
            else if (strcmp(symbol_table[i].name, name) == 0 && (symbol_table[i].classe == classe))
            {

                NODE *variable = &symbol_table[i];
                variable->initialized++;
                insertSymbol(name, usage, classe, "NOTYPE", level, classID);
                break;
            }
            if (test == 1)
                break;
        }
    }
    if (i < 0)
    {
        printf("ligne: %d : Erreur de compilation! La variable ' %s ' n'est pas declare!", line, name);
        exit(EXIT_FAILURE);
    }
}

// main check

int check_method_call_param(NODE *call, NODE *dec)
{
    if (dec->param_index == call->param_index)
    {
        int var_test = 1;
        for (int k = 0; k < dec->param_index; k++)
        {
            if (strcmp(call->params_types[k], dec->params_types[k]) != 0)
            {
                return 0;
            }
        }
        return 1;
    }
    return 0;
}

void check_methods_declared(void)
{

    for (int i = 0; i <= node_vide - 1; i++)
    {
        if ((symbol_table[i].classe == METHOD) && (symbol_table[i].usage == USE))
        {
            NODE *node = &symbol_table[i - 1];
            NODE *call = &symbol_table[i];
            if (strcmp(node->type, "NewID") == 0)
            {
                int index = -1;
                int cid = -1;
                for (int j = 0; j <= node_vide - 1; j++)
                {
                    if ((symbol_table[j].classe == CLASS) && (symbol_table[j].usage == DECLARATION) && strcmp(symbol_table[j].name, node->name) == 0)
                    {
                        index = j + 1;
                        cid = symbol_table[j].classID;
                    }
                }
                int test = 0;
                while (symbol_table[index].classID == cid && index <= node_vide - 1)
                {
                    if ((symbol_table[index].classe == METHOD) && (symbol_table[index].usage == DECLARATION) && strcmp(symbol_table[index].name, call->name) == 0)
                    {
                        NODE *dec = &symbol_table[index];
                        if (check_method_call_param(call, dec) == 1)
                        {
                            test = 1;
                            break;
                        }
                    }
                    index++;
                }
                if (test == 0)
                {
                    printf("ligne: %d : Erreur de compilation! La method ' %s ' n'est pas declare dans cette classe  ' %s ' ou   ne possede pas des arguments valides !", call->line, call->name, node->name);
                    exit(EXIT_FAILURE);
                }
            }
            else
            {
                int test = 0;
                for (int j = 0; j <= node_vide - 1; j++)
                {
                    if (symbol_table[j].classID == call->classID && (symbol_table[j].classe == METHOD) && (symbol_table[j].usage == DECLARATION) && strcmp(symbol_table[j].name, call->name) == 0)
                    {
                        NODE *dec = &symbol_table[j];
                        if (check_method_call_param(call, dec) == 1)
                        {
                            test = 1;
                            break;
                        }
                    }
                }
                if (test == 0)
                {
                    printf("ligne: %d : Erreur de compilation! la method ' %s ' n'est pas declare  ou   ne posséde pas des arguments valides !", symbol_table[i].line, symbol_table[i].name);
                    exit(EXIT_FAILURE);
                }
            }
        }
    }
}

void check_class_declared(void)
{
    for (int i = 0; i <= node_vide - 1; i++)
    {
        int test = 0;
        if ((symbol_table[i].classe == VARIABLE) && (symbol_table[i].usage == INSTANTIATION))
        {
            for (int j = 0; j <= node_vide - 1; j++)
            {
                if ((symbol_table[j].classe == CLASS) && (symbol_table[j].usage == DECLARATION) && strcmp(symbol_table[j].name, symbol_table[i].name) == 0)
                {
                    test = 1;
                    break;
                }
            }
            if (test == 0)
            {
                printf("ligne: %d : Erreur de compilation! La class ' %s ' n'est pas declare !", symbol_table[i].line, symbol_table[i].name);
                exit(EXIT_FAILURE);
            }
        }
    }
}
void check_main(void)
{
    check_class_declared();
    check_methods_declared();
    check_override();
    for (int i = 0; i <= node_vide - 1; i++)
    {
        if ((symbol_table[i].classe == METHOD) && (symbol_table[i].usage == DECLARATION))
        {
            for (int j = 0; j < symbol_table[i].param_index; i++)
            {
                if (symbol_table[i].params_init[j] == 0)
                    printf("ligne: %d : Avertissement! Le Parameter ' %s ' dans la  methode ' %s ' est declare mais n'est pas utulise !\n\n", symbol_table[i].line, symbol_table[i].params_names[j], symbol_table[i].name);
            }
        }
        if (symbol_table[i].initialized == 0)
            printf("ligne: %d : Avertissement! la variable ' %s ' est declare mais n'est pas utulise  !\n\n", symbol_table[i].line, symbol_table[i].name);
    }
}
