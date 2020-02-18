/*gcc -o filaDinamica.exe filaDinamica.c -Wall -pedantic -Wextra*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *first, *last;

void enqueue(int);
void dequeue(void);

int main(int argc, char *argv[])
{
    /*Silenciamento dos parâmetros argc, argv*/
    argc = argc;
    argv = argv;

    enqueue(0);
    enqueue(1);
    enqueue(2);
    dequeue();

    printf("%d\n", first->data);
    printf("%d", last->data);
    return 0;
}

void enqueue(int data)
{
    struct node *newNode = malloc(sizeof(struct node));

    newNode->data = data;
    newNode->next = NULL;

    if (last == NULL)
    {
        first = newNode;
        last = newNode;
    }
    else
    {
        last->next = newNode;
        last = last->next;
    }
}

void dequeue(void)
{
    struct node *temp;
    if (first == NULL)
    {
        printf("Queue vazia");
    }

    temp = first;
    first = first->next;
    free(temp);
}
