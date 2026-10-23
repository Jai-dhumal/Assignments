#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CalculateBonus
//  Description     : Calculates a bonus based on salary and years of service
//  Input           : Salary and years of service
//  Output          : Prints the calculated bonus
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 22/10/2026
//
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
*/
void CalculateBonus(float fSalary,int iYears)
{   
    float fBonus=0.0f;
    if(fSalary<=0 || iYears<=0)
    {
        printf("Enter the valid details\n");
    }

    if(iYears>=10)
    { 
        fBonus=fSalary/100*15;
        printf("The Bonus is :%.2f\n",fBonus);

    }
    else if(iYears>=5)
    {
        fBonus=fSalary/100*10;
         printf("The Bonus is :%.2f\n",fBonus);

    }

     else if( iYears<5)
    {
        fBonus=fSalary/100*5;
         printf("The Bonus is :%.2f\n",fBonus);

    }
}


int main()
{   int iYears=0;
    float fSalary=0.0f;
    printf("Enter the Salary:\n");
    scanf("%f",&fSalary);

    printf("Enter Years of service:\n");
    scanf("%d",&iYears);
    CalculateBonus(fSalary,iYears);
    return EXIT_SUCCESS;

}