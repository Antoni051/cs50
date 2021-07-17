#include <stdio.h>
#include <cs50.h> // include -lcs50 on compile
#include <string.h>

typedef struct
{
    string name;
    string number;
} person;

int main(void)
{
    person people[2];
    people[0].name = "Brian";
    people[0].number = "083248946832";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "Brian") == 0)
        {
            printf("Found %s\n", people[i].number);
        }
    }
}