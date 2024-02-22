/****unit2_less3_c_basic_assignment_ex4*****/

/*
 ======================================================================================================================

 Author      : Mahmoud Ayman
 Created on	 : Feb 22 2024

 ================== ====================================================================================================
 */
 /*
 EX2:
Write C Program to Multiply two Floating Point Numbers
i should see the Console as following:
##########Console-output###

###########################
Enter two numbers: 2.4
1.1
Product: 2.640000
########################################################################
*/









#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x ,y , product;
    printf("enter two floating number: ");
    scanf("%lf %lf",&x,&y);
    product=x*y;
    printf("product:%lf",product);
    return 0;
}
