#include <stdio.h>
#include <cs50.h>

//void meow(void);
//if you want main void above other voids

void meow(int n){
    for(int i = 0; i<n;i++){
     
    printf("meow \n");   
    }
}

int main(void){

    for (int i = 0; i < 3; i++)
    {
        meow(3);
    }
    
}
