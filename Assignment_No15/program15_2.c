/////////////////////////////////////////////////////////////////
//Problem Statement:
//Write A program That Accept Number From User Check Whether That Number 
//is Greater Than 100 or Not
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : IsGreater
//  Description     : Checks whether a number is greater than 100
//  Input           : An integer number
//  Output          : Returns TRUE if the number is greater than 100,
//                    otherwise returns FALSE
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/

BOOL IsGreater(int iNo)
{
    if((iNo > 100))
    {
        return TRUE;
    }
    return FALSE;
}
int main()
{   
    int iValue=0;
    BOOL bRet=FALSE;
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    bRet=IsGreater(iValue);

    if((bRet == TRUE))
    {
        printf("The Number Is Greater Than 100:\n");

    }
    else
    {
         printf("The Number Is Not  Greater Than 100:\n");
    }

    return EXIT_SUCCESS;
}
