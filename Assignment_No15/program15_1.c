/////////////////////////////////////////////////////////////////
//Problem Statement:
//Write A program That Accept Name From User 
//And Print That Name on Consol
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : main
//  Description     : Accepts a full name and prints it on the console
//  Input           : A full name entered by the user
//  Output          : Prints the entered name
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
int main()
{   char Name[30];
    printf("Enter Your Full Name:\n");
    scanf("%[^\n]",&Name);
    printf("Enter Name Is :%s\n",Name);

    return EXIT_SUCCESS;
}