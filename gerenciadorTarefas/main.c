#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//importe da struct tarefa + enum
#include "structs/tarefas.h"
#include "funcoes.h"


int main() {
    char buffer_choice[5];
    char buffer_quanTarefas[10];
    int tot;
    int totalTarefas = 0;
    Tarefas *task;
    
    printf("Bem vindo ao Organizer.\n");
    do
    {
        printf("Informe quantas tarefas serão cadastradas? ");
        if (fgets(buffer_quanTarefas, sizeof(buffer_quanTarefas), stdin) == NULL)
        {
            printf("[ERROR] Ao passar a quantidade.");
        };
        tot = strtol(buffer_quanTarefas, NULL, 10);
    } while (tot < 0 || tot == 0 );

    task = malloc(tot * sizeof (Tarefas));
    

    printf("Escolha uma das opções do menu\n");
    mostrarMenu();
    printf("\n");


    while(1){
        fgets(buffer_choice, sizeof(buffer_choice), stdin);
        escolhaMenu(buffer_choice, &totalTarefas, task, &tot);
        printf("Escolha uma nova ação: \n");

        // for (int i = 0; i < totalTarefas; i++)
        // {
        //     printf("%s",task[i].nome);
        //     printf("%s",task[i].descricao);
        //     printf("%s",estadoParaString(task[i].estado));
        // }
        
    }

    return 0;
}