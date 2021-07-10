#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
/*  
int main(void)
{
    string s = get_string("input: ");
    //printf("%s \n", s);
    // can declare a variable inside an argument by a comma if the type is the same
    for (int i = 0, n = strlen(s); s[i] < n; i++)
    {
        printf("%c ", s[i]);
    }
    printf("\n");
}
*/

// use #include <ctype.h> and use toUpper
int main(void)
{
    string s = get_string("before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}

/* Manual version
int main(void)
{
    string s = get_string("before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' || s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
*/