#include <stdio.h>
#include <cs50.h>

int main(void){

    //ask for input
    char c = get_char("do you agree? ");

    if (c=='y'||c=='Y'){
        printf("Agreed \n");
    }else{
        printf("Not Agreed \n");
    }
    
    // chars use '' and strings use ""
}