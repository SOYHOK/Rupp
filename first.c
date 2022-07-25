#include <stdio.h>
int main (){
  int array[5]= {1,2,3,4,5};
  int i;
  printf("the original numbers :");
for(i=0 ;i<5 ;i++){
  printf("%d " , array[i]);
}
  printf("\n");
  printf("The reverse order of array :");
for(i=4 ;i>=0 ; i--){
  printf("%d " , array[i]);
}
 
  return 0;
}