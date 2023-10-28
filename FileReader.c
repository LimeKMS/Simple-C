/**********************************************************
 * This is a program that opens and prints a text file    *
 * By: Liam Rigney                                        *
 * Date 12/04/2020                                        *
 **********************************************************/
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>


char* userInput(char fileName[80]){ //Asks for the file
  char tempStr[80];
printf("Enter the filename to open \n"); 
    scanf("%s", tempStr); 
    strcpy(fileName, tempStr);
    return fileName;
}

int main() 
{ 
    FILE *fptr; 

    char fileName[50];
    userInput(fileName);  
   
  
    fptr = fopen(fileName, "r"); //opens the file
    if (fptr == NULL) 
    { 
        printf("Cannot open file \n"); 
        exit(0); 
    } 
    printf("Name     ID     Quiz 1 Quiz 2 Quiz 3 Quiz 4 Avg\n");
  
    // Read contents from file 
    int i, j;
    char ch_arr[8][11];
    for( i=0; i < 10; i++){
      double avgCount = 0;
      for(j=0; j < 6; j++){
        fscanf(fptr, "%s", &ch_arr[i][j]);
        printf("%6s ", &ch_arr[i][j]); //aligns and prints the array
        if(j > 1){
          avgCount = avgCount + atoi(&ch_arr[i][j]); //turns the string into an integer
        }
      }
      printf("   %.2f", avgCount/4);
      printf("\n");
    }
  
    fclose(fptr); 
    return 0; 
}
