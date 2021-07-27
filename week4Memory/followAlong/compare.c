#include <stdio.h>
//gcc -o compare compare.c

/*int main(void)
{
    char *s = "HI!";
    printf("%c\n",*s);  // same as s[0]
    printf("%c\n", *(s+1)); // same as s[1]
}*/

//gcc -o compare compare.c -lcs50

#include <cs50.h>
#include <string.h>

int main(void)
{
    char *i = get_string("i: ");
    char *j = get_string("j: ");

    if (strcmp(i, j) == 0)
    {
        printf("Same \n");
    }
    else
    {
        printf("Different\n");
    }
}