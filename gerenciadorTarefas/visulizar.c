#include "visualizar.h"
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