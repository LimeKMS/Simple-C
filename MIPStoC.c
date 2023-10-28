
#include <stdio.h>

/*
  Translation of a MIPS Code, simulating assembly as C Code, using registers.
*/
int main()
{ 
  int array[] = {35,-34,82,-95,-2,22,-17,80,-67,-39,64,94,-96,95,-70,-63,69,-3,75,-10};
  int data1[20]; //odd values in the array
  int data2[20]; //even values in the array
  int size0 = 20;
  int size12 = 10;

  void prepareData(int arr[], int a1[], int a2[], int a3);
  int processData(int arr[], int a1);
  void displayResult(int a0, int a1);
  
  prepareData(array, data1, data2, size0);

  int a0 = processData(data1, size12);
  int a1 = processData(data2, size12);

  
  displayResult(a0, a1);
  
    return 0;
}


void displayResult(int a0, int a1)
{
  int t0 = a0 + a1;
  printf("Assignment 3\n");
  printf("------------\n");
  printf("Result:\n");
  printf("%d\n", t0);
}


void prepareData(int arr[], int a1[], int a2[], int a3)
{  
  int a0 = 0;
  int t0 = 0;
  int t1 = 0;
  int t2 = 0; 
  int t3 = 0;
  int t4 = 0;
  int t9 = 2;
  
    for(;t0 < a3;){
      t3 = t0 + a0;
      t4 = arr[t3];
      t3 = t4 % t9;
        if(t3 == 0){   //Label 1
          t3 = t2;
          a2[t3] = t4;
          t2++;
        }
        else {         //Label 2 continued
          t3 = t1;
          a1[t3] = t4;
          t1++;
        }
      t0++;
    }
}


int processData(int a0[], int a1)
{
  int v0 = 0;
  int t0 = 0;
  int t1 = 100;
  int t3, t4;
  int t9 = 2;

  for(;t0 < a1;){
    t3 = t0;
    t4 = a0[t3];
    t3 = t0 % t9;
    if(t3 != 0){
      t1 = t1 - t4;
    }
    else{
      t1 = t1 + t4;
    }
    t0++;
  }
  v0 = t1;

	return v0; // Return the appropriate value
}
