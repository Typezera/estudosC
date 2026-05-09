#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//importe da struct tarefa + enum
#include "structs/tarefas.h"
#include "cadastro.h"
#include "visualizar.h"


int main() {
    char buffer_choice[5];
    char buffer_quanTarefas[10];
    int tot;
    int tarefasRegistradas = 0;
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
    printf("\n");

    while(1){
        mostrarMenu();
        fgets(buffer_choice, sizeof(buffer_choice), stdin);
        escolhaMenu(buffer_choice, &tarefasRegistradas, task, &tot);
        printf("Escolha uma nova ação: \n");
        
    }

    return 0;
}