#include "funcoes.h"
#include "structs/tarefas.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrarMenu(){
    printf("\n=======MENU=======\n");
    printf(" [1] Cadastra tarefa\n");
    printf(" [2] Visualizar tarefas\n");
    printf(" [3] Remover tarefa\n");
    printf(" [4] Editar tarefa\n");
    printf("Escolha: ");
}
void escolhaEstado(){
    printf("Estado da tarefa: ");
    printf("[0]Concluida ");
    printf("[1]Urgente ");
    printf("[2]Pendente \n");
}


//Lógica de criaçao de cada tarefa.
Tarefas criarTarefa(){
    Tarefas t;
    
    char buffer_name[30];
    char buffer_descricao[100];
    char buffer_choice[6];
    
    printf("Nome da tarefa: ");
    fgets(buffer_name, sizeof(buffer_name), stdin);
    printf("\n");

    printf("Descricao: ");
    fgets(buffer_descricao, sizeof(buffer_descricao), stdin);
    printf("\n");

    strcpy(t.nome, buffer_name);
    strcpy(t.descricao, buffer_descricao);

    escolhaEstado();
    fgets(buffer_choice, sizeof(buffer_choice), stdin);
    int val = strtol(buffer_choice, NULL, 10);
    
    t.estado = val;

    return t;
}


//parte do comportamento do sistema
void escolhaMenu(char *choice){
    switch (*choice)
    {
    case '1':
        Tarefas task = criarTarefa();
        printf("nome: %s\n", task.nome);
        printf("descrição: %s\n", task.descricao);
        printf("Status: %d\n", task.estado);
        break;
    
    default:
        break;
    }
}