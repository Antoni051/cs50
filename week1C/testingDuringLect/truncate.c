#include <stdio.h>
#include <cs50.h>

int main(void){
    int x = get_int("x: ");
    int y = get_int("y: ");

    // as args are ints the answer will be an int

    // converting ints to floats allows calcs to leave decimals
    float z = (float) x / (float) y;
    // if using int the 15 / 6 = 2
    printf("%f\n",z);

    
}