/////////////////////////////////////////////////////////////////
//Problem Statement:
//Write A program That Accept Three Number From User And 
//perform Multiplication of that Two Number 
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : MulNo
//  Description     : Calculates the product of three numbers
//  Input           : Three integer numbers
//  Output          : Returns the product of the three numbers
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/


int MulNo(int iNo1,int iNo2 ,int iNo3)
{    
    int iProduct=1;
    if((iNo1 != 0))
    {
        iProduct=iProduct*iNo1;
    }
     if((iNo2 != 0))
    {
        iProduct=iProduct*iNo2;
    }
     if((iNo3 != 0))
    {
        iProduct=iProduct*iNo3;
    }

    if((iProduct == 1) && (iNo1 == 0) && (iNo2 == 0) && (iNo3 == 0))
    {
        return 0;
    }
    

    return iProduct;
}

int main()
{   
    int iValue1=0,iValue2=0,iValue3=0;
    int iRet=0;

    printf("Enter First Number:\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number:\n");
    scanf("%d",&iValue2);

    printf("Enter Third Number:\n");
    scanf("%d",&iValue3);

    iRet=MulNo(iValue1,iValue2,iValue3);

    printf("The Multiplcation of Three Number is:%d\n",iRet);

   
    return EXIT_SUCCESS;
}

