/*gcc -o pilha.exe pilha.c -Wall -pedantic -Wextra*/
#include <stdio.h>
#define N 5

void criaPilha(void);
int desempilha(void);
void empilha(int);

int pilha[N];
int t;

int main(int argc, char *argv[])
{
  int valor;
  argc = argc;
  argv = argv;

  criaPilha();
  empilha(10);
  empilha(20);

  /*Desmpilha pilha[1]*/
  if (t >= 0)
  {
    valor = desempilha();
    printf("valor: %d\n", valor);
  }
  else
    printf("pilha vazia");

  /*Desmpilha pilha[0]*/
  if (t >= 0)
  {
    valor = desempilha();
    printf("valor: %d\n", valor);
  }
  else
    printf("pilha vazia");

  /*Pilha está vazia, não desempilha*/
  if (t >= 0)
  {
    valor = desempilha();
    printf("valor: %d\n", valor);
  }
  else
    printf("pilha vazia");

  return 0;
}

void criaPilha(void)
{
  t = -1;
}

void empilha(int valor)
{
  pilha[t++] = valor;
}

int desempilha(void)
{
  return pilha[--t];
}

/*-Faça uma pilha
  -Faça uma fila
  -Faça uma lista dinâmica
  -Faça um função recursiva
  -Faça uma árvore binária*/
