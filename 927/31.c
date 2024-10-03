#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    printf("number\tsquare\tcube\n");

    //0~3
    for(int i=0;i<4;i++)
    {
        printf("%d\t%d\t%d\n",i,i*i,i*i*i);
    }

    //4~9
    for(int i=4;i<10;i++)
    {
        printf("%d\t%d\t%d\n",i,i*i,i*i*i);
    }

    //10
    printf("10\t100\t1000");

    system("pause");
    return 0;
}
