#include<stdio.h>
#include<stdlib.h>


int main(void)

{
    //長方形
    printf("*********\n");

    for(int i=0;i<7;i++)
    {
        printf("*       *\n");
    }

    printf("*********\n");

    //橢圓形
    printf("  ***\n");
    printf(" *   *\n");
    for(int i=0;i<5;i++)
    {
        printf("*     *\n");
    }
    printf(" *   *\n");
    printf("  ***\n");

    //箭頭
    printf("  *\n");
    printf("***\n");
    printf("*****\n");
    for(int i=0;i<6;i++)
    {
        printf("  *\n");
    }

    //菱形
    printf("    *\n");
    printf("   * *\n");
    printf("  *   *\n");
    printf(" *     *\n");
    printf("*       *\n");
    printf(" *     *\n");
    printf("  *   *\n");
    printf("   * *\n");
    printf("    *\n");

    system("pause");
    return 0;
}
