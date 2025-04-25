 #include<stdio.h>
 int main()

 {
    int num1;
    float num2;
    double num3;
    char character;

    printf("Enter your first number:");
    scanf("%d", &num1);

    printf("Enter your second number:");
    scanf("%f", &num2);

    printf("Enter your third number:");
    scanf("%lf", &num3);

    printf("Enter your character:");
    scanf(" %c", &character);

    printf("Integer Number: %d\n",num1);
    printf("Float Number: %f\n",num2);
    printf("Double Number: %lf\n",num3);
    printf("Character: %c\n",character);

    return 0;
}
