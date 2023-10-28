//Just a program to test out rand() and the use of functions

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int randFunction();

int main(void) {

randFunction();

  return 0;
}


int randFunction(){
int i = 0;
int ary[100];
int a = 0;
int j;
int searchTarget;
int k = 0;
int o = 0;

srand(time(0));
for(j = 100; a < j; a = a+ 20){
for(i=0; i<20; i++){
  ary[i] =((rand() % 200) +1); 
  printf("%.3d ", ary[i]);  
}

printf("\n");

}
searchTarget = ((rand()% 200 )+1);
for(i = 0; i < 100; i++){
  if(ary[i] == searchTarget){
      k++;
  }
  else{
    o++;
  }
}
printf("Search Target: %d\nSuccessful Searchs: %d\nFailed Searchs: %d", searchTarget, k, o);

return 0;
}
