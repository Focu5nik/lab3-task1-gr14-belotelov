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
  
}
