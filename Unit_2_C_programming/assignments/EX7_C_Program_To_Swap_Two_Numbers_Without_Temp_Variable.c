/*
 ======================================================================================================================
Name        :unit2_less3_c_basic_assignment_ex7
Author      : Mahmoud Ayman
Created on	: Feb 22 2024
Description : EX7: it is an interview trick

Write Source Code to Swap Two Numbers without temp variable.


 ================== ====================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
    printf("enter value of x:");
    scanf("%f",&x);
    printf("enter value of y:");
    scanf("%f",&y);

    x=x+y;
    y=x-y;
    x=x-y;

    printf(" value of x:%f\n",x);
    printf(" value of y:%f",y);

    return 0;
}
