#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

//gcc -o copy copy.c -lcs50

int main(void)
{
    char *s = get_string("s: ");

    char *t = malloc(strlen(s) + 1); // use +1 as you need the null char at the
    //end of string

    //check if address is valid
    if (t == NULL)
    {
        return 1;
    }
    
    strcpy(t,s);

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("%c\n", t[0]);

    free(t);
}
