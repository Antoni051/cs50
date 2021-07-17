#include <stdio.h>
#include <cs50.h>// include -lcs50 on compile

int main(void)
{
    int numbers[] = {4, 6, 8, 2, 7, 5, 0};

    for (int i = 0; i < 7; i++)
    {
        if (numbers[i]==0)
        {
            printf("fount\n");
            return 0;
        }
    }

    printf("not found\n");
    return 1;
}