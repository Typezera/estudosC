#include "visualizar.h"
#include "cadastro.h"
#include "structs/tarefas.h"
#include <stdio.h>

void escolhaEstado(){
    printf("Estado da tarefa.\n");
    printf("[0]Concluida ");
    printf("[1]Urgente ");
    printf("[2]Pendente \n");
}

void mostrarMenu(){
    printf("\n=======MENU=======\n");
    printf(" [1] Cadastra tarefa\n");
    printf(" [2] Visualizar tarefas\n");
    printf(" [3] Remover tarefa\n");
    printf(" [4] Editar tarefa\n");
    printf("Escolha: ");
}

void exibirTarefas(Tarefas *works, int *totTarefas, int *quant){
    printf("Tarefas cadastradas até o momento: \n");
    for (int i = 0; i < *totTarefas; i++)
    {
        printf("%s", works[i].nome);
        printf("%s", works[i].descricao);
        printf("%s \n", estadoParaString(works[i].estado));
    }

    //refatorar depois, criando uma função para conseguir aumentar o tamanho do vetor dinâmico
    int quantRegistro = *quant - *totTarefas;
    if (quantRegistro == 0)
    {
        printf("[WARNING]Não tem mais espaço para novas tarefas! \n");
        return;
    }
    
    printf("Ainda é possivel cadastrar: %d", *quant - *totTarefas);
    printf("\n");
}
