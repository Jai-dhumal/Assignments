#include<stdio.h>
#include<stdlib.h>

/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CheckVotingEligiblity
//  Description     : The function checks Wheter Age is Valid for Voting
//  Input           : Integer
//  Output          : Prints Eligiblity 
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 22/10/2026
//
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
*/

void CheckVotingEligiblity(int iAge)
{
    if(iAge<=0)
    {
        printf("Invalid Age\n");
        return;
    }
    if(iAge>=18)
    {
        printf("You Are Eligible for Voting\n");
    }
    else
    {
        printf("You Are not  Eligible for Voting\n");

    }
}

int main()
{   int iAge=0;
    printf("Enter Your Age:\n");
    scanf("%d",&iAge);
    CheckVotingEligiblity(iAge);
   
    return EXIT_SUCCESS;
}