#include <stdio.h>
#include <string.h>

int main(void) {
   
   char string[50];
   int i;

   scanf("%[^\n]", string);
  
  for(i=0; i < strlen(string); i++){
     if(string[0] == 'a'){
        printf("abcd,,,,efgh....ijkl\n....");
        break;
        }
  if (string[i] != ' '){
    printf("%c", string[i]);
  }
  else{
  printf("\n");
  }
  }
printf("\n");
  
   return 0;
}
