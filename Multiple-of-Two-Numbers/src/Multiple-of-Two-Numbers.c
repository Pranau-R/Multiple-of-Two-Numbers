#include<stdio.h>
int is_Multiple(int num1, int num2)      //using is_multiple function for two numbers
{
   return num2%num1 == 0;             //if reminder of num2/num1 = 0, then num2 is a multiple
}
int main()
{
    int num1, num2;                      //declaring integer num1 and num2

    printf("Enter the first Number:");   //getting our first number from user using printf and scanf funtion
    scanf("%d", &num1);
    printf("Enter the second Number:");  //getting our second number from user using printf and scanf funtion
    scanf("%d", &num2);

    if (is_Multiple(num1, num2))         //using the condition in main and printing the command if it is true
    printf("%d is a multiple of %d\n", num2, num1);
    else                                 //using the condition in main and printing the command if it is false
    printf("%d is not a multiple of %d\n", num2, num1);

    return 0;
}