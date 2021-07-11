#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int letterCount(string text);
int wordCount(string text);
int sentCount(string text);

int main(void)
{
    //prompt for text
    string text = get_string("Text: ");
    // prints total letters in text
    int letters = letterCount(text);
    int words = wordCount(text);
    int sents = sentCount(text);
    
    // calculate letters per 100 words
    float letPerW = ((float)letters / words);
    float lettersPer100 = letPerW*100;

    // calculate sentences per 100 words
    float sentPerW = ((float)sents / words);
    float sentPer100 =sentPerW*100;

    // calculate index
    int index = round(0.0588 * lettersPer100 - 0.296 * sentPer100 - 15.8);
    
    if (index <= 1){
        printf("Before Grade 1\n");
    } else if (index >= 16){
        printf("16+\n");
    }else{
        printf("Grade %i\n", index);
    }
    
}

//Count letters in the text
int letterCount(string text)
{
    int letterCount = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            letterCount++;
        }
    }
    return letterCount;
}

//Count Words in the text
int wordCount(string text)
{
    int wordCount = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        char currentLetter = text[i];
        if (currentLetter == ' ' || currentLetter == '.' || currentLetter == ',' || currentLetter == '?' || currentLetter == '!' || currentLetter == ';')
        {
            if (text[i + 1] == ' ')
            {
            }
            else
            {
                wordCount++;
            }
        }
    }
    return wordCount;
}

//Count Senetences in the text
int sentCount(string text)
{
    int sentCount = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        char currentLetter = text[i];
        if ((currentLetter == '?' || currentLetter == '.' || currentLetter == '!') || currentLetter == '\0')
        {
            sentCount++;
        }
    }
    return sentCount;
}
