#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CalculateArea
//  Description     : Calculates the area of a circle
//  Input           : The radius of the circle
//  Output          : Returns the area of the circle
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
float CalculateArea(float fRadius)
{   float fArea=0.0f;
    fArea=PI*fRadius*fRadius;
    return fArea;
}
int main()
{   float fRadius=0.0f;
    float fRet=0.0f;
    printf("Enter The Radius To Calculate Area:\n");
    scanf("%f",&fRadius);
    fRet=CalculateArea(fRadius);
    printf("The Area of the Circle is:%f\n",fRet);

    return EXIT_SUCCESS;
}