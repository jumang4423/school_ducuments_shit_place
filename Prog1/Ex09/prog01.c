#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stulist.h"

int main()
{
  int i,num;
  
  char class[3];
  int  id;
  char name[15];
  Record data;
  head = make_1node(data, NULL);
  listprint();
  printf("Insert new data: (class ID name) ->");
  while (scanf("%s %d %s", class, &id, name) == 3) {
    strcpy(data.class, class);
    data.id = id;
    strcpy(data.name, class);
    if (insert(data) == NULL) printf("Data %d is already on the list\n", num);
    listprint();
    printf("Insert new data: (class ID name) ->");
  }

  
  return 0;
}

NodePointer insert(Record keydata)
{
  NodePointer newnode;

  if (finditem(keydata.id) == NULL) {
    newnode = make_1node(keydata, head->next);
    head->next = newnode;

    return newnode;
  }
  else return NULL;
}

void listprint(void)
{
  NodePointer n;

  printf("Head -\n");
  for (n = head->next; n != NULL; n = n->next) {
    printf("  %s %d %s\n", n->data.class, n->data.id, n->data.name);
  }
  printf("\n");
}

NodePointer finditem(int keydata)
{
  NodePointer n;

  for (n = head; n->next != NULL; n = n->next) {
    if (n->next->data.id == keydata) return n;
  }

  return NULL;
}

NodePointer make_1node(Record keydata, NodePointer p)
{
  NodePointer n;

  if ((n = (NodePointer)malloc(sizeof(struct node))) == NULL) {
    printf("Error in memory allocation\n");
    exit(8);
  }

  n->data = keydata;
  n->next = p;

  return n;
}
