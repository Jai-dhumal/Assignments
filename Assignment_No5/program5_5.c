#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CheckCharaterType
//  Description     : Checks whether a character is uppercase, lowercase, a digit, or a special symbol
//  Input           : Character
//  Output          : Prints the character type
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 22/10/2026
//
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
*/
void CheckCharaterType(char cValue)
{
    if((cValue>='A' )&& (cValue<='Z'))
    {
        printf("The Entered Letter is Uppercase\n");
    }
    else if((cValue>='a' )&& (cValue<='z'))
    {
        printf("The Entered Letter is Lowercase\n");

    }
    else if((cValue>='0' )&& (cValue<='9'))
    {
        printf("The Entered Charater is Digit\n");

    }
    else
    {
        printf("The Entered Charater is Special Symbol\n");

    }
}
int main()
{   
    char cValue='\0';
    printf("Enter Charater\n");
    scanf("%c",&cValue);
    CheckCharaterType(cValue);


    return EXIT_SUCCESS;
}