#include "funcoes.h"
#include "structs/tarefas.h"
#include <stdio.h>
#include <string.h>

void mostrarMenu(){
    printf("\n=======MENU=======\n");
    printf(" [1] Cadastra tarefa\n");
    printf(" [2] Visualizar tarefas\n");
    printf(" [3] Remover tarefa\n");
    printf(" [4] Editar tarefa\n");
    printf("Escolha: ");
}

Tarefas criarTarefa(){
    Tarefas t;
    char buffer_name[30];
    char buffer_descricao[100];
    printf("Nome da tarefa: ");
    fgets(buffer_name, sizeof(buffer_name), stdin);
    printf("\n");
    printf("Descricao: ");
    fgets(buffer_descricao, sizeof(buffer_descricao), stdin);
    printf("\n");
    //printf("Status: ");
    //irei implementar a função de status depois....
    strcpy(t.nome, buffer_name);
    strcpy(t.descricao, buffer_descricao);
    t.estado = PENDENTE;

    return t;
}

void escolhaMenu(char *choice){
    switch (*choice)
    {
    case '1':
        Tarefas task = criarTarefa();
        printf("nome: %s", task.nome);
        printf("descrição: %s", task.descricao);
        printf("Status: %d", task.estado);
        break;
    
    default:
        break;
    }
}