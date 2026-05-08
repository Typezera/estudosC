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
    validacaoTarefa(&t);
    printf("tarefa montada com sucesso informações\n");
    printf("Nome: %s\n", t.nome);
    printf("Descrição: %s\n", t.descricao);
    printf("Status: %s\n", estadoParaString(t.estado));

    return t;
}


//parte do comportamento do sistema
void escolhaMenu(char *choice, int *total, Tarefas *task){
    switch (*choice)
    {
    case '1':
        task[*total] = criarTarefa();
        (*total)++;
        break;
    
    default:
        break;
    }
}

void validacaoTarefa(Tarefas *addres){

    char buffer_name[30];
    char buffer_descricao[100];
    char buffer_choice[6];

    printf("Nome da tarefa: ");
    if(fgets(buffer_name, sizeof(buffer_name), stdin) == NULL){
        printf("Erro na entrada dos dados de nome.");
    };
    printf("\n");
    while (buffer_name[0] == '\n')
    {
        printf("[ERROR] Valor inserido em nome é invalido\n");
        printf("Informe um valor valido ");
        fgets(buffer_name, sizeof(buffer_name), stdin);
        printf("\n");
    }

    printf("Descricao: ");
    if(fgets(buffer_descricao, sizeof(buffer_descricao), stdin) == NULL){
        printf("Erro na entrada dos dados de descrição.");
    };
    printf("\n");
    while (buffer_descricao[0] == '\n')
    {
        printf("[ERROR] Valor inserido na descrição é invalido\n");
        printf("Informe um valor valido ");
        fgets(buffer_descricao, sizeof(buffer_descricao), stdin);
        printf("\n");
    }

    strcpy(addres->nome, buffer_name);
    strcpy(addres->descricao, buffer_descricao);
    
    escolhaEstado();
    if(fgets(buffer_choice, sizeof(buffer_choice), stdin) == NULL){
        printf("Erro na entrada dos dados de Escoha");
    };
    int val = strtol(buffer_choice, NULL, 10);
    while (val >= 3)
    {
        printf("[ERROR] Valor inserido na escolha é invalido\n");
        printf("Informe um valor valido ");       
        fgets(buffer_choice, sizeof(buffer_choice), stdin);
        int val = strtol(buffer_choice, NULL, 10);
    }
    addres->estado = val;
}

char* estadoParaString(Status estado){
    if (estado == 0){return "CONCLUIDO";}
    if (estado == 1){return "URGENTE";}
    if (estado == 2){return "PENDENTE";}
    if (estado > 2){return "DESCONHECIDO";}
}
