#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//importe da struct tarefa + enum
#include "structs/tarefas.h"
#include "funcoes.h"


int main() {
    char buffer_choice[5];
    char buffer_quanTarefas[3];
    int tot;
    
    printf("Bem vindo ao Organizer.\n");
    do
    {
        printf("Informe quantas tarefas serão cadastradas? ");
        if (fgets(buffer_quanTarefas, sizeof(buffer_quanTarefas), stdin) == NULL)
        {
            printf("[ERROR] Ao passar a quantidade.");
        };
        tot = strtol(buffer_quanTarefas, NULL, 10);
    } while (buffer_quanTarefas[0] == '\n');
    printf("%d", tot);
    
    // if(fgets(buffer_quanTarefas, sizeof(buffer_quanTarefas), stdin) == NULL){
    //     printf("[ERROR] Ao passar a quantidade.");
    // };
    // while (buffer_quanTarefas[0] == "\n")
    // {
    //     if(fgets(buffer_quanTarefas, sizeof(buffer_quanTarefas), stdin) == NULL){
    //         printf("[ERROR] Ao passar a quantidade.");
    //     };
    // }

    printf("Escolha uma das opções do menu\n");
    mostrarMenu();
    printf("\n");


    while(1){
        fgets(buffer_choice, sizeof(buffer_choice), stdin);
        escolhaMenu(buffer_choice);
        
    }


    return 0;
}