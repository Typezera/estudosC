#include <stdio.h>
#include <string.h>
//importe da struct tarefa + enum
#include "structs/tarefas.h"

int main() {
    char buffer_name[30];
    char buffer_descricao[100];

    printf("Bem vindo ao Organizer.\n");

    
    while(1){

        printf("insira o nome da tarefa: ");
        fgets(buffer_name, sizeof(buffer_name), stdin);
        printf("\n");
    
        printf("insira uma decrição da tarefa: ");
        fgets(buffer_descricao, sizeof(buffer_descricao), stdin);
        printf("%s", buffer_descricao);

        
    }


    return 0;
}
// Tarefas t;

// strcpy(t.nome, "Limpar a casa");
// strcpy(t.descricao, "Pegar um dia da semana para fazer uma faxina na casa");
// t.estado = PENDENTE;

// printf("nome: %s\n", t.nome);
// printf("descricao: %s\n", t.descricao);
// printf("status: %d\n", t.estado);