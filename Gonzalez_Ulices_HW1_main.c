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
* index value based off their position in the arguement string.
*
**************************************************************/
#include <stdio.h>

// argc and argv were used as they allow input from the command line to 
// be read into main through the use of the argv character pointer array 
// which can then be output through a loop using argc which holds the value
// of the number of command line arguements which is the size of argv.
int main(int argc, char* argv[])
{
    printf("There were %d arguements on the command line\n", argc);

    for(int i = 0; i < argc; i++)
    {
        // Due to the example output showing the index of the arguments
        // containing two digits I formatted the index with 02 so it will
        // have a leading 0 if the index is a single digit and the 2 to
        // specify there to be a minimum character width of 2 characters
        printf("Arguement %02d ::   %s\n", i, argv[i]);
    }

    return 0;
}