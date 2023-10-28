/**********************************************************
 * This is a submission for Exam 3B, Scanning Array/Avg.  *
 * By: n01450656                                          *
 * Date 11/13/2020                                        *
 **********************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void scanFunction(int checkMate, int* add_k, int* add_o, int a){
int j = 0; 
int k = 0;

if(checkMate == a) { //If value in an element matchs activates pointers below
  *add_k = *add_k + 1; //Match Counter
  *add_o = *add_o + 1; //Turns on element index counter outside of function
}
return;
} //end function.


int main(void) { 
int ary[100];  //Array thats used to generate the 100 values that is searched through
int a = 0, k = 0, o = 0, f = 0; //counters
int i, j, searchTarget; 
int pastK = 0;
double indexCount = 1; //starts at 1 so its 1-100 instead of 0-99

srand(time(0));

  for(i = 0; i < 100; i++){ //Generates the first Array
    ary[i] =((rand() % 200) +1); 
    printf("%.3d ", ary[i]);  
}
printf("\n\n");
for(j = 0; j < 100; j++){
searchTarget =((rand() % 200) +1); //used to generate the search Target for each run
for(i = 0; i < 100; i++){
scanFunction(ary[i], &k, &o, searchTarget);
if(o > 0){
  indexCount = indexCount + i; //Stores the array element in which a match is found 
}
}
if(k == pastK){
  f++;
  indexCount = 100 + indexCount; //Adds a full search to the index count to be avg'ed out 
}
pastK = k;
}
double avg = indexCount/10000; //Average of location of search target, its 10000 instead of 100 because I didn't want to devide by 100 while storing in index counter
printf("Scans: 100\nMatchs: %d\nFailures: %d\nAvg: %.2lf", k, f, avg);

  return 0;
} //end main


