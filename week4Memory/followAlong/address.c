#include <stdio.h>
#include <cs50.h>
// gcc -o address address.c 
/*
int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%i\n", *p);
}
*/
// pointer is a variable that stores the address of a variable
// use %p to show address in printf
// * means go to the address
// & means value of the address

//gcc -o address address.c -lcs50
int main(void){
    string s = "HI!";
    printf("%p\n",&s[0]);
    printf("%p\n",&s[1]);
}

// string x == char *x