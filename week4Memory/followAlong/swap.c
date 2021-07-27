#include <stdio.h>
#include <stdlib.h>

//  gcc -o swap swap.c

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;
    printf("x is %i, y is %i\n", x, y);
    swap(&x,&y); // address of x and y
    printf("x is %i, y is %i\n", x, y);

}

void swap(int *a, int *b){
    int tmp = *a;
    // goto the address of a and b and change
    *a = *b;
    *b = tmp;
}