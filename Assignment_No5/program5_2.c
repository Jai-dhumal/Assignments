#include<stdio.h>
#include<stdlib.h>

/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CheckLeafYear
//  Description     : Checks whether the given year is a leap year
//  Input           : One integer (year)
//  Output          : Prints whether the year is valid and a leap year
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 22/10/2026
//
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
*/
void CheckLeafYear(int iYear)
{
    if(iYear<=0)
    {
        printf("The Year You Entered Invalid\n");
        return ;
    }

    if((iYear%4==0) && (iYear%100!=0) || (iYear%400==0))
    {
        printf("The Entered Year Is Leaf Year\n");
    }
    else
    {
        printf("The Entered Year Is  Not Leaf Year\n");

    }
}
int main()
{   
    int iYear=0;
    printf("Enter Your Year:\n");
    scanf("%d",&iYear);
    CheckLeafYear(iYear);
    return EXIT_SUCCESS;
}