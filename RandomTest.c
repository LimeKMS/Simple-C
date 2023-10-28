/**********************************************************
 * This is a test of the rand() and looping functions     *
 * By: Liam Rigney                                        *
 * Date 10/22/2020                                        *
 **********************************************************/

#include <stdio.h>
#include <stdlib.h>

int lottoNum(); //Function for generating and printing 6 random numbers

int main(void) {

  int userInput;
  int i;
  int j;
  int userOutput;


  printf("How many sets of numbers do you want to run? (enter 0 to exit)\n");
  scanf("%d", &userInput);
  printf("Your input: %d\n\n", userInput);

  do{
    if(userInput <=0 ){    //exits out of the function
    break;
  }

    j = 1;
    for(i = 1; i <= userInput; i++) {  //Sets
      
      printf("Set %d: ", j);
      lottoNum();

      j++;
    }


  printf("\nHow many sets of numbers do you want to run? (enter 0 to exit)\n");
  scanf("%d", &userInput);
  printf("Your input: %d\n\n", userInput);
  
  }while(1 < 2);

  printf("you have exited.");

  return 0;
}


int lottoNum(){
  int num;
  int i2;
  for (i2 = 1; i2 <= 6; i2++){
    num = (rand() % 52 + 1);
    printf("%.2d ", num);

}
printf("\n");
return(num);
}
