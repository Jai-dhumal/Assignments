#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : SquareMeter
//  Description     : Converts an area from square feet to square meters
//  Input           : Area in square feet
//  Output          : Area in square meters
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
double SquareMeter(float fValue)
{
     double dConverted=fValue*0.0929;
     return dConverted;
}
int main()
{   
    float fValue=0.0f;
    double dRet=0.0;
    printf("Enter Area in Square Feet:\n");
    scanf("%f",&fValue);
    dRet=SquareMeter(fValue);
    printf("The converted SquareFeet to SquareMeter is:%.2lf\n",dRet);

    return EXIT_SUCCESS;

}