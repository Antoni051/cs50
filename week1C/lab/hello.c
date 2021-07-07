#include <stdio.h>
#include <cs50.h>

int main(void){
   string name = get_string("hello, please state your name:  \n");
   printf("hello, %s\n",name);
}