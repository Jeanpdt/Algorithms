/*gcc -o fila.exe fila.c -Wall -pedantic -Wextra*/
#include <stdio.h>
#define N 3

void criaFila(void);
void entraFila(int);
int foraFila(void);

int fila[N];
int p;
int u;

int main(int argc, char *argv[])
{
  int valor;

  argc = argc;
  argv = argv;

  criaFila();

  entraFila(1);

  entraFila(2);

  entraFila(3);

  valor = foraFila();
  printf("%d\n", valor);

  valor = foraFila();
  printf("%d\n", valor);

  valor = foraFila();
  printf("%d\n", valor);

  entraFila(4);
  entraFila(5);

  valor = foraFila();
  printf("%d\n", valor);

  valor = foraFila();
  printf("%d\n", valor);

  return 0;
}

void criaFila(void)
{
  p = 0;
  u = 0;
}

void entraFila(int valor)
{
  fila[u++] = valor;

  if (u == N)
    u = 0;
}

int foraFila(void)
{
  int x = fila[p++];

  if (p == N)
    p = 0;

  return x;
}