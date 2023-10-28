#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void populateList(int listVal[]);
void printList(int listVal[]);
void searchList(int listVal[]);

int main(void) {
  int list[100];
  
  
  srand(time(0)); // wouldnt time(NULL) work better for this?

  populateList(list);

  printList(list);

  searchList(list);

  return 0;
}
void populateList(int listVal[]){
  int i;
  for(i = 0; i < 100; i++) {
    listVal[i] = rand() % 200 + 1;
  }
  for(int z = 0; z < 100; z++) {
      for(int j = z+1;j<100; j++){
         if(listVal[z] == listVal[j]) {
           listVal[z] = rand() % 200 + 1;
           printf("repeating num fixed\n");
         }
      }
  }
}

void printList(int listVal[]){
  int i;
  int counter;
  for(i = 0; i < 100; i++){
    printf("%4d", listVal[i]);
    counter++;
    if(counter % 10 == 0){
      printf("\n");
    }
  }
}

void searchList(int listVal[]) {

  int number;
  int i;
  
  printf("Enter integer value(1-999):\n");
  scanf("%d", &number);

  for (i = 0; i < 100; i++) {
    if(listVal[i]==number){
      printf("The number %d is at %d", number, i);
    }

  }

  return;
}
