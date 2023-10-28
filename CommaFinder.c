#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LIMIT 50

int checkComma(const char *input) {
    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == ',') {
            return 1;
        }
    }
    return 0;
}

int main(void) {
    char input[MAX_LIMIT];
    char *words[2] = { NULL, NULL };
    char delim[] = ", ";

    do {
        printf("\nEnter input string: ");
        fgets(input, MAX_LIMIT, stdin);
        size_t ln = strlen(input) - 1;
        if (*input && input[ln] == '\n')
            input[ln] = '\0';

        if (strcmp(input, "q") == 0) {
            break;
        }

        if (checkComma(input) == 0) {
            printf("No comma in string.\n");
        } else {
            char *ptr = strtok(input, delim);
            int count = 0;
            while (ptr != NULL && count < 2) {
                words[count++] = ptr;
                ptr = strtok(NULL, delim);
            }
            printf("First word: %s\n", words[0]);
            if (words[1] != NULL) {
                printf("Second word: %s\n", words[1]);
            }
        }
    } while (1);

    return 0;
}
