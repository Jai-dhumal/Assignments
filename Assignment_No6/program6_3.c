#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CalculateDiscount
//  Description     : Calculates the discount and payable amount
//  Input           : Purchase amount (float)
//  Output          : Prints the payable amount
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 22/10/2026
//
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
*/
void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount < 1000)
    {
        fDiscount = 0.0f;
    }
    else if (fAmount < 5000)
    {
        fDiscount = fAmount * 10 / 100;
    }
    else
    {
        fDiscount = fAmount * 20 / 100;
    }

    fFinalAmount = fAmount - fDiscount;

    printf("Payable Amount = %f\n", fFinalAmount);
}
int main()
{   float fAmount=0.0f;
    printf("Enter The Purchase Amount:\n");
    scanf("%f",&fAmount);
    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}