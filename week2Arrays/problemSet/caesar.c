#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

string cypherText(int k, string plain);

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Usage 1 : ./caesar key\n");
        return 1;
    }

    //convert argv[1] to int
    int k = atoi(argv[1]);
    if (k == 0 || k < 1)
    {
        printf("Usage : key must be Larger than 1 and be a number.\n");
        return 1;
    }
    printf("k: %i\n", k);

    string plain = get_string("Plaintext : ");

    cypherText(k, plain);
}

string cypherText(int k, string plain)
{
    printf("Cypher : ");
    //loop through the plaintext string
    for (int i = 0, n = strlen(plain); i < n; i++)
    {
        //check for lowecase
        if (islower(plain[i]))
        {
            printf("%c", (((plain[i] + k) - 97) % 26) + 97);
        }
        else if (isupper(plain[i]))
        {
            printf("%c", (((plain[i] + k) - 65) % 26) + 65);
        }
        else
        {
            printf("%c", plain[i]);
        }
    }
    printf("\n");
}