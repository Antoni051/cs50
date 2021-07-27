
#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>

//  gcc -o mario mario.c -lcs50

void draw(int h);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

// Iterative
/*void draw(int h)
{
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}*/

//recursive
void draw(int h)
{
    if (h == 0)
    {
        return;
    }
    draw(h - 1);
    for (int i = 0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");
}
