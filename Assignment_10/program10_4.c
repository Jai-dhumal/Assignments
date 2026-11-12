#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : TempToFar
//  Description     : Converts a temperature from Celsius to Fahrenheit
//  Input           : A temperature in Celsius
//  Output          : The temperature in Fahrenheit
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
double  TempToFar(float fTemp)
{
    double dConvert=((fTemp*9)/5)+32;
    return dConvert;
}
int main()
{   float fTemp=0.0f;
    double dRet=0.0f;
    printf("Enter Temperature to convert it into the Fahrenheit:\n");
    scanf("%f",&fTemp);
    dRet=TempToFar(fTemp);
    printf("The converted Temperature to Fahrenheit is:%.2lf\n",dRet);

    return EXIT_SUCCESS;
}