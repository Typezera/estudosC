#include "cadastro.h"
#include "structs/tarefas.h"
#include "visualizar.h"
#include "removerTarefa.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Lógica de criaçao de cada tarefa.
Tarefas criarTarefa(){
    Tarefas t;
    validacaoTarefa(&t);
    // printf("Nome: %s\n", t.nome);
    // printf("Descrição: %s\n", t.descricao);
    // printf("Status: %s\n", estadoParaString(t.estado));
    return t;
}


//parte do comportamento do sistema
void escolhaMenu(char *choice, int *totalRegistrado, Tarefas *task, int *quant){
    switch (*choice)
    {
    case '1':
        if (*totalRegistrado < *quant)
        {
            task[*totalRegistrado] = criarTarefa();
            (*totalRegistrado)++;
            break;
        }
        printf("Valor máximo de tarefas já atingido. \n");
        break;
    case '2':
        exibirTarefas(task, totalRegistrado, quant);
        complementoExibicao(totalRegistrado, quant);
        break;
    case '3':
        deletarTarefa(task,totalRegistrado, quant);
        break;
    default:
        break;
    }
}

void validacaoTarefa(Tarefas *addres){
    int val;
    char buffer_name[30];
    char buffer_descricao[100];
    char buffer_choice[6];
    printf("\n");
    do
    {
        printf("Informe um nome: ");
        if(fgets(buffer_name, sizeof(buffer_name), stdin) == NULL){
            printf("Valor inválido");
        };
        printf("\n");
    } while (buffer_name[0] == '\n');

    do
    {
        
        printf("Descricao: ");
        if(fgets(buffer_descricao, sizeof(buffer_descricao), stdin) == NULL){
            printf("Erro na entrada dos dados de descrição");
        }

        printf("\n");

    } while (buffer_descricao[0] == '\n');
    
    printf("\n");

    strcpy(addres->nome, buffer_name);
    strcpy(addres->descricao, buffer_descricao);

    do
    {
        escolhaEstado();
        if(fgets(buffer_choice, sizeof(buffer_choice), stdin) == NULL){
            printf("Erro na entrada dos dados de Escoha");
        };
        val = strtol(buffer_choice, NULL, 10);
        printf("\n");
    } while (val >= 3);

    addres->estado = val;
}

char* estadoParaString(Status estado){
    if (estado == 0){return "CONCLUIDO";}
    if (estado == 1){return "URGENTE";}
    if (estado == 2){return "PENDENTE";}
    if (estado > 2){return "DESCONHECIDO";}
}
