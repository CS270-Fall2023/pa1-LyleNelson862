#include "getTok.h"
int main()
{
    // This is meant to be a C-string 
    // The pointer *entry represents the line that will be read by fgets(), which it the user's input
    char *entry;
    printf("Please enter the string: ");
    // The pointer *str will store the result of passing the user's input into fgets()
    /*The arguments of fgets:... */
    char *str = fgets(&entry, 20, stdin);
    // The pointer *token will represent each individual token, found by passing str into the getTokens function. 
    char *token;

    // token = strtok(str, " ");
    token = strtok(str, " ");
    printf("\nToken 1: %s", token);

    int num = 2;

    while((token = strtok(NULL, " "))!= NULL)
    {
        printf("\nToken %d",num);
        printf(": %s", token);
        num++;
    }
   
    printf("Token %d", num);
    printf(": %s", token);
    printf("\nNumber of Tokens: %d", num-1);
    return 0;
}

// int getTokens(char *s, char ***args)
// {
//     strtok(s, *args);
// }