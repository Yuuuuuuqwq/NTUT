#include <stdio.h>
#include <math.h>

int main()
{
    double invest = 5000.0, rate, total;
    int years = 15;

    for (rate = 10.0; rate <= 12.0; rate += 0.5)
    {
        printf("Interest rates: %.1f%%\n", rate);
        printf("Year    Money\n");

        for (int year = 1; year <= years; year++)
        {
            total = invest * pow(1.0 + rate / 100.0, year);
            printf("%-7d %.2f\n", year, total);
        }

        printf("\n");
    }

    system("pause");
    return 0;
}