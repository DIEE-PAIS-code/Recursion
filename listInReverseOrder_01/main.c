#include <stdio.h>
#include <stdlib.h>
#include <listModule.h>


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
