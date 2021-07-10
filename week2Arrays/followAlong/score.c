#include <stdio.h>
#include <cs50.h>

/* Crappy Non Array way of solving problem

float average(score1,score2,score3);

int main(void){
    int s1 = get_int("Score 1:\n ");
    int s2 = get_int("Score 2:\n ");
    int s3 = get_int("Score 3:\n ");
    printf("Average = %.2f",average(s1,s2,s3) );
}

float average(score1,score2,score3){
    float mean = (score1+score2+score3)/3.0;
    return mean;
}
*/
const int total = 3;

float mean(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float)length;
}

int main(void)
{
    int scores[total];
    for (int i = 0; i < total; i++)
    {
        scores[i] = get_int("Score: ");
    }
    printf("Average: %.2f\n", mean(total, scores));
}
