#include <stdio.h>

void main(){

  int Lista[] = {7,1,3,2,8,9,1,4,10,23,45,22,5,0};
  int i,j,Min_index,Min_value;

  int sizeOfList = sizeof(Lista)/sizeof(Lista[0]);

  for(i=0; i<sizeOfList; i++){
    Min_value = Lista[i];
    Min_index = i;
    for(j=i; j<sizeOfList; j++){
      if(Min_value>Lista[j]){
        Min_value = Lista[j];
        Min_index = j;
      }
    }
    if(Min_index != i){
      Lista[Min_index] = Lista[i];
      Lista[i] = Min_value;
    }
  }
  for(i=0; i<sizeOfList; i++){
    printf("%d ", Lista[i]);
  }
  printf("\n");
}
