#include<stdio.h>
#include<stdlib.h>

/*
////////////////////////////////////////////////
//
//Function Name : Accept
//Description   : Prints Specified Number of Stars.
//Input         : Integer
//Output        : prints iNo Number of Stars
//Author        : Dhumal Jaydeep Machhindra
//Date          : 18/10/2026
//
////////////////////////////////////////////////
*/

void Accept(int iNo1)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo1;iCnt++)
    {
        printf(" * ");
    }
}

int main()
{   
    int iValue=0;
    iValue=5;

    Accept(iValue);


    return EXIT_SUCCESS;
}