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
* arguments and displays them to the user with their correct
* index value based on their position in the command line.
*
**************************************************************/
#include <stdio.h>

// main an integer argc which holds the number of command line arguments 
// and the argv character pointer array which holds each argument entered
int main(int argc, char* argv[])
{
    // To match the example output a newline was inserted before the text
    printf("\nThere were %d arguments on the command line.\n", argc);

    // for loop iterates though the argv array and outputs values 
    // found in each index, argc is used as the limit for the loop 
    for(int i = 0; i < argc; i++)
    {
        // 02 was used to print numbers with a leading 0 if the index is a 
        // single digit and for all numbers to have a minimum width of 2
        printf("Argument %02d: \t%s\n", i, argv[i]);
    }

    return 0;
}