#include <cs50.h>
#include <stdio.h>

int main(void){
    float a = get_float("a: ");
    float b = get_float("b: ");
    float c = a+b;
    // the .XX is how many dec points printf shows
    printf("%.50f \n",c);
}