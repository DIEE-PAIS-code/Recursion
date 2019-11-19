
#ifndef LISTMODULE_H
#define LISTMODULE_H

#define FALSE 0
#define TRUE !(FALSE)

typedef struct element {
  int val;
  struct element *next;
} T_element;

typedef int Bool;

Bool isEven(int v);

Bool isEmpty(T_element * p);

T_element * newList(int n);

T_element * newListFromArray(int *arr, int n );

void showList(T_element * p);

void showListReverse(T_element * p);

#endif //LISTMODULE_H
