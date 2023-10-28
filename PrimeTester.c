#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Welcome to Prime Tester\n\n");

  do{  //Loops until the user inputs a valid answer
    int input;
    int isPrime = 1;
    
    // Get user input
    
    printf("Enter a number between 0 and 100: ");
    scanf("%d", &input);
    
    // Test for valid input
    if(input < 0 || input > 100)
    {
        printf("\nError: Invalid input for Prime Tester\n\n");
        continue;
    }
    
    
    if(input < 2)
    {
        isPrime = 0;
    }
    else if(input % 2 == 0 && input != 2)
    {
        isPrime = 0;
    }
    else
    {
        for(int x = 3; x <= sqrt(input); x += 2)
        {
            if(input % x == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }
    
// The code below this comment has been assembled by the professor

    // Display result
    if(isPrime == 1)
    {
        printf("The entered number is prime\n");
    }
    else
    {
        printf("The entered number is not prime\n");
    }

    return 0;
  }while(0 < 1);
}
