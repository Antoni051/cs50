#include <cs50.h>
#include <stdio.h>

int main(void){
    
    int years = 0;

    int startPopSize;
    do{
        startPopSize = get_int("What is the starting population size: ");
    }while (startPopSize <9);
    printf("start size %i\n",startPopSize);

    int endPopSize;
    do{
        endPopSize = get_int("What is the end population size: ");
    }while (endPopSize <= startPopSize);
    printf("end size %i\n",endPopSize);

    while (startPopSize<endPopSize)
    {
        startPopSize = startPopSize +(startPopSize/3)-(startPopSize/4);
        years++;
    }
    
    
    printf("it took %i years\n",years);
}