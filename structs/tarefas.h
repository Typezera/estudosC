#ifndef TAREFAS_H
#define TAREFAS_H

typedef enum {
    CONCLUIDO, 
    URGENTE, 
    PENDENTE
}Status;

typedef struct 
{
    char nome[100];
    char descricao[200];
    Status estado;
}Tarefas;

#endif