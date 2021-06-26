#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define e 2.71828
#define b 10
#define PI 3.14

void sum(void);
void subtract(void);
void multiply(void);
void divide(void);
void sqnum(void);   //square of a number
void sqroot(void);  //square root of a number
void expo(void);    //exponent of a number
void natexpo(void); //natural exponent of a number
void logarithm(void);
void natlog(void); //natural log of a number
void log_num1_to_the_base_num2(void);
void inverse(void); //inverse of a trigonometry funtion
void fact(void);    //factorial of a number
void power(void);
void trigno(void);

double num1, num2, num3, num4;

int main()

{
    while (1)
    {
        system("cls");
        printf("**--**--** SCIENTIFIC CALCULATOR **--**--**\n\n");
        int choice;

        printf("Enter 1 for addition\n");
        printf("Enter 2 for subtraction\n");
        printf("Enter 3 for multiplication\n");
        printf("Enter 4 for division\n");
        printf("Enter 5 for square\n");
        printf("Enter 6 for square root\n");
        printf("Enter 7 for natural exponential\n");
        printf("Enter 8 for exponent\n");
        printf("Enter 9 for logarithm\n");
        printf("Enter 10 for natural logarithm\n");
        printf("Enter 11 for log_a to base_b\n");
        printf("Enter 12 for inverse\n");
        printf("Enter 13 for factorial\n");
        printf("Enter 14 for power\n");
        printf("Enter 15 for trignometry\n");
        printf("Enter 0 for exit\n");

        printf("Enter your choice :\n");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            sum();
            break;

        case 2:
            subtract();
            break;

        case 3:
            multiply();
            break;

        case 4:
            divide();
            break;

        case 5:
            sqnum();
            break;

        case 6:
            sqroot();
            break;

        case 7:
            natexpo();
            break;

        case 8:
            expo();
            break;

        case 9:
            logarithm();
            break;

        case 10:
            natlog();
            break;

        case 11:
            log_num1_to_the_base_num2();
            break;

        case 12:
            inverse();
            break;

        case 13:
            fact();
            break;

        case 14:
            power();
            break;

        case 15:
            trigno();
            break;

        case 0:
            exit(0);

        default:
            printf("Invalid choice\n");
            break;
        }
        getch();
    }
    return 0;
}

//for addition of two numbers
void sum()
{
    printf("How many numbers do you want to add");
    printf("\n Enter 2 for two numbers\n Enter 3 for three numbers\n Enter 4 for four numbers\n");

    int choice;

    printf("Enter your choice:\n");
    scanf("%d", &choice);

    switch (choice)
    {

    case 2:
        printf("Enter first number:\n");
        scanf("%lf", &num1);
        printf("Enter second number:\n");
        scanf("%lf", &num2);
        printf("The sum of these numbers is : %lf \n", num1 + num2);
        break;

    case 3:
        printf("Enter first number:\n");
        scanf("%lf", &num1);
        printf("Enter second number:\n");
        scanf("%lf", &num2);
        printf("Enter third number:\n");
        scanf("%lf", &num3);
        printf("The sum of these numbers is : %lf \n", num1 + num2 + num3);
        break;

    case 4:
        printf("Enter first number:\n");
        scanf("%lf", &num1);
        printf("Enter second number:\n");
        scanf("%lf", &num2);
        printf("Enter third number:\n");
        scanf("%lf", &num3);
        printf("Enter fourth number:\n");
        scanf("%lf", &num4);
        printf("The sum of these numbers is : %lf\n", num1 + num2 + num3 + num4);
        break;
        
    default:
        printf("Invalid choice");
        break;
    }
}

//    for subtraction of two numbers
void subtract()
{
    printf("Enter first number:\n");
    scanf("%lf", &num1);
    printf("Enter second number:\n");
    scanf("%lf", &num2);
    printf("The subtraction of these two numbers is : %lf\n", num1 - num2);
}

// for multiplication of two numbers
void multiply()
{
    printf("How many numbers do you want to multiply\n");
    printf("Enter 2 for two digits\n Enter 3 for three digits\n Enter 4 for four digits\n");

    int choice;
    printf("Enter your choice:\n");
    scanf("%d", &choice);

    switch (choice)
    {

    case 2:

        printf("Enter first number:\n");
        scanf("%lf", &num1);
        printf("Enter second number:\n");
        scanf("%lf", &num2);
        printf("The multiplication of these numbers is : %lf\n", num1 * num2);
        break;

    case 3:

        printf("Enter first number:\n");
        scanf("%lf", &num1);
        printf("Enter second number:\n");
        scanf("%lf", &num2);
        printf("Enter third number:\n");
        scanf("%lf", &num3);
        printf("The multiplicationof these numbers is : %lf\n", num1 * num2 * num3);
        break;

    case 4:

        printf("Enter first number\n");
        scanf("%lf", &num1);
        printf("Enter second number:\n");
        scanf("%lf", &num2);
        printf("Enter third number:\n");
        scanf("%lf", &num3);
        printf("Enter fourth number:\n");
        scanf("%lf", &num4);
        printf("The multiplication of these numbers is : %lf\n", num1 * num2 * num3 * num4);
        break;

    default:

        printf("Invalid choice\n");
        break;
    }
}

//    for division of two numbers
void divide()
{
    printf("Enter first number:\n");
    scanf("%lf", &num1);
    printf("Enter second number:\n");
    scanf("%lf", &num2);

    if (num2 == 0)
    {

        printf("You cannot enter 0\n");
    }

    else
    {
        printf("Answer after division is : %lf\n", num1 / num2);
    }
}

//for finding square of a number
void sqnum()
{
    printf("Enter a number:\n");
    scanf("%lf", &num1);
    printf("The square of the number is : %lf\n", num1 * num1);
}

//for finding square root of a number
void sqroot()
{
    printf("Enter a number:\n");
    scanf("%lf", &num1);

    if (num1 < 0)
    {
        printf("My friend you have given a negetive value\n\n");
    }
    else
    {
        printf("The square root of the number is : %lf\n", sqrt(num1));
    }
}

//for finding exponentiation of a number
void expo()
{
    printf("Enter a number:\n");
    scanf("%lf", &num1);
    printf("The exponent of the number is : %lf\n", pow(b, num1));
}

//for natural exponent of a number
void natexpo()
{
    printf("Enter a number:\n");
    scanf("%lf", &num1);
    printf("The natural exponent of the number is : %lf\n", pow(e, num1));
}

//for finding log
void logarithm()
{
    printf("Enter a number:\n");
    scanf("%lf", &num1);

    if (num1 == 0)
    {
        printf("you cannot enter 0\n");
    }
    else
    {
        printf("The logarithm of the number is : %lf\n", log(num1) / log(b));
    }
}

//for natural log
void natlog()
{
    printf("Enter a number:\n");
    scanf("%lf", &num1);

    if (num1 == 0)
    {
        printf("You cannot enter 0");
    }
    else
    {
        printf("The natural log of the number is : %lf\n", log(num1));
    }
}

//     	for finding log of a number to the base of any number
void log_num1_to_the_base_num2()
{
    printf("Enter a number:\n");
    scanf("%lf", &num1);
    printf("Enter a base:\n");
    scanf("%lf", &num2);
    if (num1 == 0 || num2 == 0)
    {
        printf("You cannot enter 0\n");
    }
    else
    {
        printf("The log_num1_to_the_base_num2 is : %lf\n", log(num1) / log(num2));
    }
}

//for finding inverse of a funtion
void inverse()
{
    printf("Enter a number:\n");
    scanf("%lf", &num1);
    if (num1 == 0)
    {
        printf("You cannot enter 0\n");
    }
    else
    {
        printf("The inverse of the number is : %lf\n", 1 / num1);
    }
}

//for finding factorial of a number
void fact()
{
    printf("Enter a number:\n");
    scanf("%lf", &num1);
    double f = 1;
    int i = 1;
    for (; i <= num1; i++)
    {
        f = f * i;
    }
    printf("The factorial of the number is : %lf\n", f);
}

//		num1 raise to the power num 2
void power()
{
    printf("Enter a number:\n");
    scanf("%lf", &num1);
    printf("Enter a power:\n");
    scanf("%lf", &num2);
    printf("The value of a num1 to the power num2 is : %lf\n", pow(num1, num2));
}

//	 for trignometric functions
void trigno()
{
    int choice;

    printf("what do you want\n");
    printf("1.sin\n2.cos\n3.tan\n");
    printf("Enter your choice:\n");
    scanf("%d", &choice);
    switch (choice)
    {

    case 1:
        printf("Enter a number\n");
        scanf("%lf", &num1);
        printf("The sin of number is : %lf\n", sin(num1 * PI / 180));
        break;

    case 2:
        printf("Enter a number\n");
        scanf("%lf", &num1);
        printf("The cos of number is : %lf\n", cos(num1 * PI / 180));
        break;

    case 3:
        printf("Enter a number\n");
        scanf("%lf", &num1);
        
        printf("The tan of a number is : %lf\n", tan(num1));
        break;

    default:
        printf("Invalid choice\n");
        break;
    }
}
