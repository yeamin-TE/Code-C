#include<stdio.h>
int main()
{
    int num;
    float num2;
    double num3;
    char Character;

    printf("Enter a number and a character:");
    scanf("%d %c", &num, &Character);

    printf("The number is: %d\n",num);
    printf("The Character is: %c",Character);

    return 0;
}
