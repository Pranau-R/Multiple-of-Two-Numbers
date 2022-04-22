/*
Module: Multiple-of-Two-Numbers.c

Function:
        To find whether the given two numbers are multiple or not.

Copyright notice:
        This file copyright (C) 2022 by

        MCCI Corporation
        3520 Krums Corners Road
        Ithaca, NY 14850

        An unpublished work. All rights reserved.

        This file is proprietary information, and may not be disclosed or
        copied without the prior permission of MCCI Corporation.

Author:
        Pranau R, MCCI Corporation   March 2022
*/

#include<stdio.h>

/****************************************************************************\
|
|   Function
|
\****************************************************************************/

int is_Multiple(int num1, int num2)                         //using is_multiple function for two numbers
    {
    return num2 % num1 == 0;                                //if reminder of num2/num1 = 0, then num2 is a multiple
    }

/****************************************************************************\
|
|   Code.
|
\****************************************************************************/

int main()
    {
    printf("\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("This is multiple of two numbers v1.0.0\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("\n");
    printf("It is used to find the multiple of any given two whole numbers.\n\n");

    int num1, num2;                                          // declaring integer num1 and num2

    printf("\nEnter the first Number: ");                       // getting our first number from user using printf and scanf funtion
    scanf("%d", &num1);

    printf("Enter the second Number: ");                      // getting our second number from user using printf and scanf funtion
    scanf("%d", &num2);

    printf("\n\n-------------------------------------------------\n");

    if (is_Multiple(num1, num2))                            // using the condition in main and printing the command if it is true
        {
        printf("\n\n%d is a multiple of %d\n", num2, num1);
        }
    else                                                     // using the condition in main and printing the command if it is false
        {
        printf("%d is not a multiple of %d\n", num2, num1);
        }

    printf("\n\nPress any key to close the program!...\n");
    getch();

    return 0;
    }