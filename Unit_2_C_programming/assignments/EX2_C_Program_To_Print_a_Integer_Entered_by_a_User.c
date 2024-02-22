/****unit2_less3_c_basic_assignment_ex2*****/

/*
 ======================================================================================================================
 Name        : EX1_C_Program_To_Print_Sentence.c
 Author      : Mahmoud Ayman
 Created on	 : Feb 22 2024
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX1 C Program To Print Sentence using Ansi-style (c99)
 ================== ====================================================================================================
 */
 /*
 EX2:

Write C Program to Print a Integer Entered by a User
i should see the Console as following:
##########Console-output###
Enter a integer: 25
You entered: 25
###########################


 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter a integer:");
    scanf("%d",&x);
    printf("You entered:%d",x);

    return 0;
}
