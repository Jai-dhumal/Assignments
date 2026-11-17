#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : RangeSum
//  Description     : Calculates the sum of all even numbers in a range
//  Input           : Two integer values representing the start and end points
//  Output          : Returns the sum of the even numbers in the range
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
int RangeSum(int iStart,int iEnd)
{   
    if((iStart > iEnd) || (iStart < 0)  )
    {
        printf("Invalid Input");
        return -1;

    }
    int iSum=0;
    int iCnt=0;
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {   if((iCnt % 2) == 0)
        {
          iSum=iSum+iCnt;
        }

    }
    return iSum;
}

int main()
{   
    int iValue1=0,iValue2=0,iRet=0;

    printf("Enter The Start Point:\n");
    scanf("%d",&iValue1);

    printf("Enter The End Point:\n");
    scanf("%d",&iValue2);
    
    iRet=RangeSum(iValue1,iValue2);
    if(iRet != -1)
    {
    printf("The sum Range between start and End is:%d\n",iRet);
    }
    


    return EXIT_SUCCESS;
}