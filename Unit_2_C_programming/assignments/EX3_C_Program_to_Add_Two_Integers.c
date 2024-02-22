/****unit2_less3_c_basic_assignment_ex3*****/

/*
 ======================================================================================================================
 Author      : Mahmoud Ayman
 Created on	 : Feb 22 2024

 ================== ====================================================================================================
 */
 /*
EX3:

Write C Program to Add Two Integers

i should see the Console as following:
##########Console-output###
Enter two integers: 12
11
Sum: 23
###########################



*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,sum ;
    printf("enter two integers : ");
    scanf("%d %d",&x,&y);
    sum=x+y;
    printf("sum:%d",sum);

    return 0;
}
