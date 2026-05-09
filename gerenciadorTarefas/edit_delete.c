#include "edit_delete.h"
#include "visualizar.h"
#include "cadastro.h"
#include <stdio.h>
#include <stdlib.h>


void deletarTarefa(Tarefas *task, int *totTarefas, int *quant){
    char buffer_task_remove[10];
    int id_remove;
    exibirTarefas(task,totTarefas, quant);
    do
    {

        printf("Informe o ID da tarefa que deseja remover. \n");
        printf("[DELETE]: ");
        if(fgets(buffer_task_remove, sizeof(buffer_task_remove), stdin) == NULL){
            printf("[ERROR] Aconteceu algum problema.");
        }

        id_remove = strtol(buffer_task_remove, NULL, 10);
        printf("\n");

    } while (id_remove >= *totTarefas || id_remove < 0);
    
    for (int i = id_remove; i < *totTarefas - 1; i++)
    {
        task[i] = task[i + 1];
    }

    *totTarefas -= 1;
}

void editarTarefa(Tarefas *task, int *totTarefas, int *quant){
    char buffer_task_edit[10];
    int id_edit;
    exibirTarefas(task, totTarefas, quant);
    do
    {

        printf("ID da tarefa que deseja editar. \n");
        printf("[EDIT]: ");
        if(fgets(buffer_task_edit, sizeof(buffer_task_edit),stdin) == NULL){
            printf("[ERROR] Ocorreu algum problema.");
        }
        id_edit = strtol(buffer_task_edit, NULL, 10);
        printf("\n");

    } while (id_edit >= *totTarefas || id_edit < 0);

    validacaoTarefa(&task[id_edit]);
}


