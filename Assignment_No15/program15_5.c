/////////////////////////////////////////////////////////////////
//Problem Statement:
//Write A program That Accept Total Marks And Obtained Marks From User And 
//Calculate Obtained percentage
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CalculatePercentile
//  Description     : Calculates the percentage of obtained marks
//  Input           : Total marks and obtained marks
//  Output          : Returns the calculated percentage
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
float CalculatePercentile(int iNo1,int iNo2)
{   float fPercentile=0.0f;
    if((iNo1==0))
    {
        return 0;
    }

    fPercentile=((float)iNo2/iNo1)*100;
    return fPercentile;


}
int main()
{   int iValue1=0,iValue2=0;
    float fRet=0.0f;
    printf("Enter The Total Marks:\n");
    scanf("%d",&iValue1);

    printf("Enter The Obtained the marks Marks:\n");
    scanf("%d",&iValue2);

    fRet=CalculatePercentile(iValue1,iValue2);
    printf("The Calculated percentile out of total Marks is:%.2f\n",fRet);
    return EXIT_SUCCESS;
}