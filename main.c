#include "getTok.h"
int main()
{
    // This is meant to be a C-string 
    char * entry;
    printf("Please enter the string: ");

    /*The arguments of fgets:... */
    char * str = fgets(&entry, 20, stdin);

    char *token;
    printf("\nNumber of Tokens: ");
    token = strtok(str, " ");
    printf("\nToken 1: %s", token);

    int count =2;
    while((token = strtok(NULL, " "))!= NULL)
    {
        printf("\nToken %d",count);
        printf(": %s", token);
        count++;
    }
 

    return 0;
}


// int getTokens(char *s, char ***args)
// {

// }