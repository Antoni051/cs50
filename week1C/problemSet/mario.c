#include <cs50.h>
#include <stdio.h>

int main(void){
    
    //input and input validation
    int n =0;
    do{
        n = get_int("Height: ");
    }while( n > 8 || n < 1 );

    //height of pyramid
    for(int i = 0; i < n; i++){
        
        for(int j = n-1; j > i ; j--){
            printf(" ");
        }

        for(int j = 0; j<=i; j++){
            printf("#");
        }

        printf("\n");

    }

}