#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : DollarToRupeeINR
//  Description     : Converts a dollar amount to Indian rupees
//  Input           : An integer dollar amount
//  Output          : Returns the equivalent amount in Indian rupees
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
int DollarToRupeeINR(int iNo)
{   
    if(iNo < 0)
    {
        iNo = -iNo;
        
    }
    int iRupees=iNo*70;
    return iRupees;
}
int main()
{   int iValue=0;
    int iConversion=0;
    printf("Enter the dollar to convert in rupees:\n");
    scanf("%d",&iValue);
    iConversion=DollarToRupeeINR(iValue);
    printf("The converted Indian Rupees are:%d\n",iConversion);
    return EXIT_SUCCESS;
}