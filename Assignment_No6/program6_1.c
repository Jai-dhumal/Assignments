#include<stdio.h>
#include<stdlib.h>

/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CalculateElectricityBill
//  Description     : Calculates and prints the electricity bill based on units consumed
//  Input           : Number of electricity units (integer)
//  Output          : Prints the electricity bill or an invalid-units message
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 22/10/2026
//
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
*/
void CalculateElectricityBill(int iUnits)
{   
    float fBill=0.0f;

    if(iUnits<0)
    {
        printf("Invalid Units\n");
    }
    if(iUnits<=100)
    {   
        fBill=iUnits*5; 
        printf("your Electricity bill to pay is:%f\n",fBill);
    }
    else if(iUnits<=200)
    {
        fBill=iUnits*7;
        printf("your Electricity bill to pay is:%f\n",fBill);
    }
    else
    {
        fBill=iUnits*10;
        printf("your Electricity bill to pay is:%f\n",fBill);
    }
}
int main()
{   int iUnits=0.0f;
    printf("Enter the Electricity Units:\n");
    scanf("%d",&iUnits);
    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}