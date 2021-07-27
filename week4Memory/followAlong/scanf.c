#include <stdio.h>

//  gcc -o scanf scanf.c

int main(void)
{
    int x;
    printf("x: ");
    scanf("%i", &x);
    printf("%i\n", x);
}