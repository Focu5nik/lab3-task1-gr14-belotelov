#include <stdio.h>
#include <string.h>

#define MAX 300

int NumberOfChar(char* str, char ch)
{
    int count = 0;
    for (int i = 0; i < strlen(str);i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main(int args, char** argv)
{  
    if (args < 2) {
        printf("Invalid number of arguments");
        return 1;
    }

    char str[MAX];
    strncpy(str, argv[1], MAX);

    printf("Enter the letter: ");
    char ch = getchar();

    printf("\nResult of the function: %u",   
    NumberOfChar(str, ch));
}
