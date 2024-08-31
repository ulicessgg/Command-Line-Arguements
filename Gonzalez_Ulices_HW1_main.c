/**************************************************************
* Class::  CSC-415-01 Fall 2024
* Name:: Ulices Gonzalez
* Student ID:: 923328897
* GitHub-Name:: ulicessgg
* Project:: Assignment 1 – Command Line Arguments
*
* File:: Gonzalez_Ulices_HW1_main.c
*
* Description:: This file handles the fetching of command line
* arguements and displays them to the user with their correct
* index value based off their position in the arguement string
*
**************************************************************/
#include <stdio.h>

// argc and argv were used as they allow input from the command line to be
// read into main through the use of the argv character pointer array which
// can then be output through a loop using integer argc which holds the value
// of the number of command line arguements which is the size of argv
int main(int argc, char* argv[])
{
    if(argc > 1)
    {
        printf("correct number of arguments have been read\n");
        printf("There were %d arguemtns on the command line\n", argc);
    }
    if(argv != NULL)
    {
        printf("command line arguements have been read\n");

        for(int i = 0; i < argc; i++)
        {
            printf("%s\n", argv[i]);
        }
    }

    return 0;
}