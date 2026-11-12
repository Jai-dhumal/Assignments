#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : RectArea
//  Description     : Calculates the area of a rectangle
//  Input           : Width and height of the rectangle
//  Output          : Returns the area of the rectangle
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
double RectArea(float fWidth,float fHeight)
{
    double dResult=0.0;
    dResult=fWidth*fHeight;
    return dResult;
}
int main()
{   float fValue1=0.0f,fValue2=0.0f;

    double dRet=0.0;

    printf("Enter Width of Rectangle:\n");
    scanf("%f",&fValue1);

    printf("Enter Height of Rectangle:\n");
    scanf("%f",&fValue2);

    dRet=RectArea(fValue1,fValue2);
     
    printf("The Area of Rectangle is:%.2lf\n",dRet);

    return EXIT_SUCCESS;
}