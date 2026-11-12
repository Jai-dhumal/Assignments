#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Table
//  Description     : Prints the multiplication table of a number
//  Input           : An integer number
//  Output          : Prints the first ten multiples of the number
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
void Table(int iNo)
{
  int iCnt=0;
  for(iCnt=1;iCnt<=10;iCnt++)
  {
    printf("%d\t",iCnt*iNo);
  }
}
int main()
{   int iValue=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    Table(iValue);
    
    return EXIT_SUCCESS;
}