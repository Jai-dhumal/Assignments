//////////////////////////////////////////////////////////////////////////////////////////
//problem statemet:
//write a program that Accept Number from User And return the Multiplication of All Digits
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : MulDigits
//  Description     : Returns the multiplication of all digits in a number
//  Input           : An integer number
//  Output          : Returns the product of all digits
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
int MulDigits(int iNo)
{   
    if(iNo == 0)
    {
        return 0;
    }
    int iLastDigit=0;
    int iProduct=1;

    while( iNo != 0)
    {
        iLastDigit=iNo % 10;
        if(iLastDigit != 0)
        {
        iProduct=iLastDigit*iProduct;
        }
        iNo=iNo/10;

    }
    return iProduct;

    
}
int main()
{   int iValue=0,iRet=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    iRet=MulDigits(iValue);
    printf("The Product of All Digit is:%d",iRet);
    return EXIT_SUCCESS;
}