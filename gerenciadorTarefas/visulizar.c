#include "visualizar.h"
#include "cadastro.h"
#include "structs/tarefas.h"
#include <stdio.h>

void escolhaEstado(){
    printf("Estado da tarefa.\n");
    printf("[0]Concluida ");
    printf("[1]Urgente ");
    printf("[2]Pendente \n");
    printf("\n");
}

void mostrarMenu(){
    printf("\n=======MENU=======\n");
    printf(" [1] Cadastra tarefa\n");
    printf(" [2] Visualizar tarefas\n");
    printf(" [3] Remover tarefa\n");
    printf(" [4] Editar tarefa\n");
    printf("\n");
    printf("Escolha: ");
}

void exibirTarefas(Tarefas *works, int *totTarefas, int *quant){
    printf("Tarefas cadastradas até o momento: \n");
    printf("\n");
    for (int i = 0; i < *totTarefas; i++)
    {
        printf("ID: %d\n", i);
        printf("NOME: %s", works[i].nome);
        printf("DESCRICAO: %s", works[i].descricao);
        printf("STATUS: %s \n", estadoParaString(works[i].estado));
        printf("\n");
    }
    printf("\n");
}

void complementoExibicao(int *totTarefas, int *quant){
    int quantRegistro = *quant - *totTarefas;
    if (quantRegistro == 0)
    {
        printf("[WARNING]Não tem mais espaço para novas tarefas! \n");
        return;
    }
    
    printf("Ainda é possivel cadastrar: %d\n", *quant - *totTarefas);
}
