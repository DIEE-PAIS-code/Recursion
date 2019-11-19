#include <stdio.h>
#include <stdlib.h>


#define FALSE 0
#define TRUE !(FALSE)

typedef struct element {
  int val;
  struct element *next;
} T_element;

typedef int Bool;

Bool isEven(int v){
  return v%2==0;
}

Bool isEmpty(T_element * p){// check if the list is empty
  return (p==NULL);
}




T_element * newList(int n){
  int v;
  T_element *p0;    // point to the list; NULL iff the list is empty
  T_element *p;     // point to the CURRENT element
  T_element *p_new; // point to a new element

  // create the first element.
  printf("value ?\n");
  scanf("%d",&v);
  p=(T_element *) malloc (sizeof (T_element));
  p0=p;
  p->val=v;

  // create n-1 elements
  for(int i=1; i<n; i++) {
    printf("value ?\n");
    scanf("%d", &v);
    p_new = (T_element *) malloc(sizeof(T_element));
    p->next = p_new; // link the actual element to the new one.
    p = p_new;
    p->val = v;
  }
  p->next=NULL; // terminate the list
  return p0;

}




T_element * newListFromArray(int *arr, int n ){
  T_element *p0;    // point to the list; NULL iff the list is empty
  T_element *p;     // point to the CURRENT element
  T_element *p_new; // point to a new element

  if (n==0)
  return NULL;

  // create the first element.
  p=(T_element *) malloc (sizeof (T_element));
  p0=p;
  p->val=arr[0];

  // create n-1 elements
  for(int i=1; i<n; i++) {
    p_new = (T_element *) malloc(sizeof(T_element));
    p->next = p_new; // link the actual element to the new one.
    p = p_new;
    p->val = arr[i];
  }
  p->next=NULL; // terminate the list
  return p0;

}


void showList(T_element * p){
  if (isEmpty(p))
  printf("EMPTY");
  else
  while (!isEmpty(p)){
    printf("%d ", p->val);
    p=p->next;
  }
  printf("\n");
}

void showListReverse(T_element * p){
  if (!isEmpty(p->next))
    showListReverse(p->next);
  printf("%d ", p->val);
}



int main() {
  #define N 10
  T_element * p0, *p_tmp;
  int i;
  int arr[N]={0,1,2,3,4,5,6,7,8,9};

  p0= newListFromArray(arr,N);
  printf("Your list is:\n");
  showList(p0);
  showListReverse(p0);


getchar();
return 0;
}
