#include<stdio.h>
#include<stdlib.h>

int main(void)

{
    int temp,a,b,c;
    
    scanf("%d %d %d",&a,&b,&c);

    if(b>a)
    {
        //交換數值
        temp=a;
        a=b;
        b=temp;
    }
    if(c>a)
    {
        temp=a;
        a=c;
        c=temp;
    }
    if(b<c)
    {
        temp=b;
        b=c;
        c=temp;
    }

    printf("%d %d",&a,&c)

    system("pause");
    return 0;
}