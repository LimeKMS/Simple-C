#include <stdio.h>

int * hexiSet(int input){
  int i = 0;  
  
  static int x[5];
  x[4] = input % 10;
  i = input /10;
  x[3] = i % 10;
  i = i /10;
  x[2] = i % 10;
  i = i / 10;
  x[1] = i % 10;
  i = i / 10;
  x[0] = i % 10;
  
  return x;
}

int * addHex(int * x, int y){  
  x[4] += y;
  for(int i = 4; i >= 0; i--){
    if(x[i] >= 16){
      x[i] -= 16;
      x[i - 1]++;
    }
  }  
  return x;
}

void printHex(int * x){
for(int i = 0; i < 5; i++ ){
  printf("%d", x[i]);  
}
  printf("   ");
}

int main(void) {

  printHex(hexiSet(100));
  printf("\n");
  printHex(addHex(hexiSet(100), 4));

  
  return 0;
}
