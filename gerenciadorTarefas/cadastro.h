#include "structs/tarefas.h"

#ifndef CADASTRO_H
#define CADASTRO_H

void mostrarMenu();
void escolhaMenu(char *choice, int *totalRegistrado, Tarefas *task, int *quant);
Tarefas criarTarefa();

void validacaoTarefa(Tarefas *addres);
char* estadoParaString(Status estado);

#endif