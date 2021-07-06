#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");

    int y = get_int("y: ");

    //get_int and int can be replace with long to show over 31bit nums
    printf("%i\n",x+y);
}
