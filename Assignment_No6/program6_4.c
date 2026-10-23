#include<stdlib.h>
#include<stdio.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CheckValidTriangle
//  Description     : Checks whether three side lengths form a valid triangle
//  Input           : Three side lengths (integers)
//  Output          : Prints whether the triangle is valid
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 22/10/2026
//
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
*/
void CheckValidTriangle(int iSide1,int iSide2,int iSide3)
{    
    
    if(iSide1<=0 || iSide2<=0 || iSide3<=0)
    {
        printf("Invalid Triangle\n");
        return ;
    }
    if((iSide1<iSide2+iSide3) && (iSide2<iSide1+iSide3) && (iSide3<iSide1+iSide2) )
    {
        printf("The Triangle is Valid Triangle");
    }
    else 
    {
        printf("Invalid Input\n");
    }
    
}
int main()
{   int iSide1=0,iSide2=0,iSide3=0;
    printf("Enter The Length Of First Side:\n");
    scanf("%d",&iSide1);

    printf("Enter The Length Of Second Side:\n");
    scanf("%d",&iSide2);

    printf("Enter The Length Of Second Side:\n");
    scanf("%d",&iSide3);

    CheckValidTriangle(iSide1,iSide2,iSide3);
    return EXIT_SUCCESS;
}