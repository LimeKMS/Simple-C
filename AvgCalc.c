/**********************************************************
 * This is an Average calc.                               *
 * By: Liam Rigney                                        *
 * Date 10/17/2020                                        *
 **********************************************************/

#include <stdio.h>

double averageNum(int a);

int main(void) {

int userCounterNumber;
double userInput;
double userAverage;

do {
printf("Please enter how many numbers you want to find the average of or type in 0 to exit: ");
scanf("%d", &userCounterNumber);
  if(userCounterNumber <=0 ){
    break;
  }

userAverage = averageNum(userCounterNumber) / userCounterNumber;
printf("The average is %.02lf\n\n", userAverage);
} while(1 < 2);

printf("You have exited");

  return 0;
}



double averageNum(int a) 
{
double inputA;
double result;
    for(int i = 1; i <= a; i++) {
  printf("Enter your number: ");
  scanf("%lf", &inputA);

  result = result + inputA;
}
return result;
}

