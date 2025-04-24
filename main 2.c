#include<stdio.h>
int main()
{
    int num = 10;
    float num2 = 5.32;
    double num3 = 10.56348;
    char name = 'A ';

    printf("Int: %d float: %f Double: %lf Char: %c",num, num2, num3, name);

    int first number;
    float second number;
    double third number;
    char character;

    printf("Enter your first number:");
    scanf("%d", &first number);

    printf("Enter your second number:");
    scanf("%f", &second number);

    printf("Enter your third number:");
    scanf("%lf", &third number);

    printf("Enter your character:");
    scanf(" %c", &character);

    printf("Integer Number: %d\n",first number);
    printf("Float Number: %f\n",second number);
    printf("Double Number: %lf\n",third number);
    printf("Character: %d\n",character);

    return 0;
}
