/*
 ======================================================================================================================
Name        :unit2_less3_loop&conditions_EX2
Author      : Mahmoud Ayman
Created on	: Feb 22 2024
Description : EX2 C Program to check vowel or consonant letter.


 ================== ====================================================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int lower_case, upper_case;
    printf("enter your char:");
    scanf("%c",&c);

    lower_case=(c=='a' || c=='e' || c=='o' || c=='i' || c=='u');
    upper_case=(c=='A' || c=='E' || c=='I' || c=='O' || c=='U');

    if(lower_case || upper_case)
    {
        printf("vowel alphabet");

    }
    else
    {
        printf("consonant alphapet");
    }
    return 0;
}
