/////////////////////////////////////////////////////////////////
//Problem Statement:
//Write A program That Accept Two Number From User Check Whether That  Two Number 
//Are Equal  or Not
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : IsEqual
//  Description     : Checks whether two numbers are equal
//  Input           : Two integer numbers
//  Output          : TRUE if the numbers are equal, otherwise FALSE
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/

BOOL IsEqual(int iNo1,int iNo2)
{
    if((iNo1 == iNo2))
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{   
    int iValue1=0,iValue2=0;
    BOOL bRet=FALSE;

    printf("Enter First Number:\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number:\n");
    scanf("%d",&iValue2);

    bRet=IsEqual(iValue1,iValue2);

    if((bRet == TRUE))
    {
        printf("The Number Are Equal\n");
    }
    else
    {
        printf("The Number Are Not  Equal\n");

    }
    return EXIT_SUCCESS;
}

