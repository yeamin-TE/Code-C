#include<stdio.h>
#include<stdbool.h>
int main()
{
    printf("Hello World!\n");
    printf("My Name is Yeaminnor Rahman Kabir\n");

    int playerscore = 95;
    printf("Player Score 1: %d\n", playerscore);

    playerscore=200;
    printf("Player Score 2: %d\n",playerscore);

    const double PI = 3.14;
    printf("PI= %lf\n",PI);

    int Age = 22;
    char Section = 'A';
    float Salary = 25000;
    double Bonus = 10200.12548;
    bool Married = false;

    printf("Age = %d\n",Age);
    printf("Section = %c\n",Section);
    printf("Salary = %f\n",Salary);
    printf("Bonus = %lf\n",Bonus);
    printf("Married = %d",Married);
    return 0;
}

