/*
 ======================================================================================================================
Name        :unit2_less3_loop&conditions_EX1
Author      : Mahmoud Ayman
Created on	: Feb 22 2024
Description : EX1 C Program to check a number is even or odd.


 ================== ====================================================================================================
 */



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("enter the number ");
    scanf("%i",&x);
    if(x%2 ==0)
    {
        printf("the number is even");
    }
    else if(x%2!=0)
    {
        printf("the number is odd");
    }
    return 0;
}
