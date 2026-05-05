#include <stdio.h>
#include <string.h>
#include "structs/tarefas.h"


int main() {
    Tarefas t;

    strcpy(t.nome, "Limpar a casa");
    strcpy(t.descricao, "Pegar um dia da semana para fazer uma faxina na casa");
    t.estado = PENDENTE;

    printf("nome: %s\n", t.nome);
    printf("descricao: %s\n", t.descricao);
    printf("status: %d\n", t.estado);

    return 0;
}