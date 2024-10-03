#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float a,b,BMI;
    float ;

    printf("輸入身高(公分)與體重(公斤)\n");
    scanf("%f %f",&a,&b);
    a=a/100;

    BMI=b/(a*a);
    printf("%f\n",BMI);

    BMI1=10*BMI;

    switch(BMI1)
    {
        case 0 ... 184:
            printf("Underweight\n");
            break;
        case 185 ... 249:
            printf("Normal\n");
            break;
        case 250 ... 299:
            printf("Overweight\n");
            break;
        default:
            printf("Obese\n");
            break;
    }

    //範圍顯示
    printf("BMI VALUES\n");
    printf("Underweight:\tLess than 18.5 \nNormal:\t\tbetween 18.5 and 24.9 \nOverweight:\tbetween 25 and 29.9 \nObese:\t\t30 or greater");
    system("pause");
    return 0;
}