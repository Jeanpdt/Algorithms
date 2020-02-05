/*gcc -o recursiva.exe recursiva.c -Wall -pedantic -Wextra*/
#include <stdio.h>

int fibonnaci(int);

int main(int argc, char *argv[])
{
  int result;

  argc = argc;
  argv = argv;

  result = fibonnaci(20);

  printf("%d", result);

  return 0;
}

int fibonnaci(int n)
{
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else
    return (fibonnaci(n - 1) + fibonnaci(n - 2));
}