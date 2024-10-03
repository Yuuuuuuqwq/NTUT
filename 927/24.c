#include<stdio.h>
#include<stdlib.h>

int main(void)

{
    int a;
    
    scanf("%d",&a);

    //偶數
    if(a%2==0)
    {
       printf("even");
    }
    
    //奇數
    else
    {
        printf("odd");
    }
    

    system("pause");
    return 0;
}