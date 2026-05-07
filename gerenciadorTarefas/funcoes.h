#include "structs/tarefas.h"

#ifndef FUNCOES_H
#define FUNCOES_H

void mostrarMenu();
void escolhaMenu(char *choice);
Tarefas criarTarefa();
void escolhaEstado();
void validacaoTarefa(Tarefas *addres);
char* estadoParaString(Status estado);

#endif