#include <stdio.h>

void towersOfHanoi(int n, char source, char destination, char helper)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    towersOfHanoi(n - 1, source, helper, destination);

    printf("Move disk %d from %c to %c\n", n, source, destination);

    towersOfHanoi(n - 1, helper, destination, source);
}

int main()
{
    int disks = 3;  

    printf("Solution to Towers of Hanoi with %d disks:\n", disks);
    towersOfHanoi(disks, 'A', 'C', 'B');  

    return 0;
}
