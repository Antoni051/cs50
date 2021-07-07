#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void){

    int dimeUsed = 0;
    int nickUsed = 0;
    int pennyUsed = 0;
    int quartUsed = 0;

    float cash = 0 ;
    do{
        cash = get_float("Change owed (in $): ");
    } while (cash<0);

    //dollars into cents to avoid fp errors
    int cents = round(cash*100);
    //testing
    //printf("%.2f\n", cash);
    //printf("%i\n", cents);    

    while (cents > 0 )
    {
        while (cents>=25) //quarters
        {
            cents -=25;
            quartUsed++;
        }
        while (cents>=10)// dimes
        {
            cents-=10;
            dimeUsed++;
        }
        while (cents>=5)//nickels
        {
            cents-=5;
            nickUsed++;
        }
        while (cents>=1)//pennies
        {
            cents-=1;
            pennyUsed++;
        }
    }
    
    printf("Change is: \n");
    printf("%i Quarter(s) \n", quartUsed);
    printf("%i Dime(s) \n", dimeUsed);
    printf("%i Nickel(s) \n", nickUsed);
    printf("%i Pennie(s) \n", pennyUsed);
    

}