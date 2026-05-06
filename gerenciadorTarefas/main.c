#include <stdio.h>
#include <string.h>
//importe da struct tarefa + enum
#include "structs/tarefas.h"
#include "funcoes.h"

int main() {
    // Tarefas t;

    // strcpy(t.nome, "limpar a casa");
    // strcpy(t.descricao, "Preciso lavar o banheiro");
    // t.estado = PENDENTE;

    // criarTarefa(&t);

    // Tarefas lista_tarefas[10];
    char buffer_choice[5];

    printf("Bem vindo ao Organizer.\n");
    printf("Escolha uma das opções do menu\n");
    mostrarMenu();

    while(1){
        fgets(buffer_choice, sizeof(buffer_choice), stdin);
        escolhaMenu(buffer_choice);
        
        // printf("insira o nome da tarefa: ");
        // fgets(buffer_name, sizeof(buffer_name), stdin);
        // printf("\n");
    
        // printf("insira uma decrição da tarefa: ");
        // fgets(buffer_descricao, sizeof(buffer_descricao), stdin);
        // printf("%s", buffer_descricao);

        
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