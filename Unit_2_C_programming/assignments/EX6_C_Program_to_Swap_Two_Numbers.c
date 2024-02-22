/*
 ======================================================================================================================
Name        :unit2_less3_c_basic_assignment_ex6
Author      : Mahmoud Ayman
Created on	: Feb 22 2024
Description : EX6: Write Source Code to Swap Two Numbers


 ================== ====================================================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x,y, temp=0.0;
    printf("enter value of x:");
    scanf("%lf",&x);
    printf("enter value of y:");
    scanf("%lf",&y);
    temp=x;
    x=y;
    y=temp;
    printf(" value of x:%lf\n",x);
    printf(" value of y:%lf",y);
    return 0;
}
