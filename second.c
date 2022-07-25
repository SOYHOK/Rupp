#include <stdio.h>
int main (){
  int array1[6]={1,2,3,4,5,9}, array2[5]={1,3,5,7,9};
  printf( "intersection: ");
for(int i = 0; i<6; i++){
  for(int j = 0; j<5; j++){
    if( array1[i]== array2[j])
      printf("%d ",array2[j]);
    }   
}

    return 0;
}