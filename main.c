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
    token = strtok(NULL, " ");
    printf("\nToken 2: %s", token);
    token = strtok(NULL, " ");
    printf("\nToken 3: %s", token);
    printf("\nToken 4: \n");
    // printf(&entry);

    return 0;
}


// int getTokens(char *s, char ***args)
// {

// }