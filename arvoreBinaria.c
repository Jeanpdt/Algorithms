/*gcc -o arvoreBinaria.exe arvoreBinaria.c -Wall -pedantic -Wextra*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
  int info;
  struct node *left;
  struct node *right;
};

struct node *insert(struct node *, int);
struct node *newNode(int);
void traversal(struct node *);

int main(int argc, char *argv[])
{
  struct node *head = NULL;

  /*Silencing the parameters argc, argv*/
  argc = argc;
  argv = argv;

  /*Insertion of values*/
  head = insert(head, 5);
  insert(head, 3);
  insert(head, 10);
  insert(head, 50);
  insert(head, 25);

  /*Prints the binary search tree*/
  traversal(head);

  return 0;
}

/*Create a new node*/
struct node *newNode(int info)
{
  struct node *newNode;

  newNode = (struct node *)malloc(sizeof(struct node));

  newNode->info = info;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

/*Inserte a new node in the binary search tree*/
struct node *insert(struct node *head, int info)
{
  if (head == NULL)
  {
    return newNode(info);
  }

  if (info < head->info)
    head->left = insert(head->left, info);
  else if (info > head->info)
    head->right = insert(head->right, info);
  else
    return head;

  return head;
}

/*Travel the tree*/
void traversal(struct node *head)
{
  if (head == NULL)
    return;

  traversal(head->left);
  printf("%d\n", head->info);
  traversal(head->right);
}
