/************************************************
* Project 1 - Simple HashTable                  *
* Class: COP3404 - Systems Software             *
* Author: Liam Rigney                           *
* 9/12/22                                       *
*************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TableSize 45 
#define Max 50


typedef struct node { //Node struct
    char name[Max];
    int value;
} node;
node array[Max]; //Array initilized


void insert(int index, node *p){ //Insert Function

  if (array[index].value != 0){ //Checks if index has something in it
    if (strcmp(array[index].name, p->name) == 0){  //Same name, but already full
      printf("\nERROR %s already exists at index %d.\n", array[index].name, index);
    }
    else{ //Index full, different name tho
      printf("\nCollision occured at index %d with %s.\n", index, p->name);
    }
  }
  else{ //Emtpy index, stores it into the index
    array[index] = *p;
    strcpy(array[index].name, p->name);
    printf("\nStored %s with value of %d at index %d.\n", array[index].name, array[index].value, index);
  }

} 

void search(int index, char* name){ //Search Function

  if (array[index].value != 0){ 
    if (strcmp(array[index].name, name) == 0){ //Here
      printf("\nFound %s at index %d with a value of %d.\n", name, index, array[index].value);
    }
    else{ //Right index, not here
      printf("\nERROR %s not found.\n", name);
    }
  }
  else{ // No Collision, nothing here
    printf("\nERROR %s not found, empty index.\n", name);
  }
  
}

int hash(char name[Max]){  //Hash Function
  int key = 0;
  for (int i = 0; name[i] != '\0'; ++i){
    char x = name[i];
    key = key + x;
  }
  key = key % TableSize;
  return key;
}

int main(int argc, char *argv[]) {
 
  FILE *fp;
  char ch;
  char name[Max];
  int x, HaValue;


  fp = fopen(argv[1], "r");
  if (NULL == fp) {
        printf("file can't be opened \n");
    }
  node * p;  
  p = malloc(sizeof(struct node)); //Memory allocated
 do{
  x = 0;
  int counter = 0;
   
  if (fscanf(fp, "%49s", name) != 1) break;
  if (fscanf(fp, "%d", &x) != 1) counter = 1;
  HaValue = hash(name);
  p->value = x;
  strcpy(p->name, name);
  if (counter != 0) {
    search(HaValue, name); //Looks for name and value stored with name
  }
  else{
    insert(HaValue, p); //Trys to insert name
  }
  
  } while(!feof(fp));
  printf("\n");
  
    //Closing the file
    fclose(fp);
  
  return 0;
}