#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000
#define SIDES 6

int main(void)
{
    srand(time(NULL));

    int frequencies[11] = {0};

    for (int i = 0; i < ROLLS; i++)
    {
        int die1 = rand() % SIDES + 1;  
        int die2 = rand() % SIDES + 1;  
        int sum = die1 + die2;        
        frequencies[sum - 2]++;        
    }

    printf("Point\tFrequency\tExpected Probability\tReasonable?\n");
    printf("-----------------------------------------------------------\n");

    for (int i = 0; i < 11; i++)
    {
        int point = i + 2;
        double expected_probability;

        if (point <= 7)
            expected_probability = (point - 1) / 36.0;
        else
            expected_probability = (13 - point) / 36.0;

        int expected_count = ROLLS * expected_probability;
        int reasonable = abs(frequencies[i] - expected_count) <= expected_count * 0.1;
       
        printf("%2d\t%8d\t%20.2f%%\t%s\n", point, frequencies[i], expected_probability * 100, reasonable ? "Yes" : "No");
    }

    return 0;
}