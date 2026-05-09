#include "removerTarefa.h"
#include "visualizar.h"
#include <stdio.h>
#include <stdlib.h>


int deletarTarefa(Tarefas *task, int *totTarefas, int *quant){
    char buffer_task_remove[10];
    int id_remove;
    exibirTarefas(task,totTarefas, quant);

    do
    {
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
