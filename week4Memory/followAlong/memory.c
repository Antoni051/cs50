#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char *s = malloc(3);
    s[0] = 'H';
    s[1] = 'I';
    s[2] = '\0';

    printf("%s\n",s);
    free(s);
}