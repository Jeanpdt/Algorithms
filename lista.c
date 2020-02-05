/*gcc -o lista.exe lista.c -Wall -pedantic -Wextra*/
#include <stdio.h>
#include <stdlib.h>

struct list
{
  int info;
  struct list *next;
};

struct list *push(struct list *, int);

int main(int argc, char *argv[])
{
  struct list *myList, *head;

  argc = argc;
  argv = argv;

  /*Start list*/
  myList = (struct list *)malloc(sizeof(struct list));
  myList->info = 5;
  myList->next = NULL;

  head = myList;

  myList = push(myList, 70);
  myList = push(myList, 80);

  printf("%d\n", head->info);
  printf("%d\n", head->next->info);
  printf("%d\n", head->next->next->info);

  return 0;
}

/*Aloccate a new node, and then myList->next points to him*/
struct list *push(struct list *myList, int info)
{
  struct list *new;
  new = (struct list *)malloc(sizeof(struct list));
  new->info = info;
  new->next = NULL;

  return myList->next = new;
}
