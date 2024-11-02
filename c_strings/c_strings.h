#include <stdio.h>
#ifndef c_strings_h
#define c_strings_h

/*
Author: Matthew Lipsius
Date: 
Purpose: To declare functions to assist in the following exercise
			for C programming for beginners, pass by reference used.

1) write a function to count the number of chars in a string (length)
cannot use the library function, should take a character array as a parameter
returns an integer of the length

2) write another function to concatenate 2 char strings
cannot use library functions, takes 3 parameters
char result[], const char str1[], const char str[]2, can return void or whatever u want

3) write a function to determine if 2 strings are equal - cannot use library function
function takes 2 const char arrays as parameters and returns a boolean 
*/

//find length of string
int str_len(const char *p_str_input);

//concatenate 2 strings
int str_concat(const char *p_str1, const char *p_str2);

//check if 2 strings are of equal length
bool str_eq(const char *p_str1, const char *p_str2);

//reverse a string
int str_rev(char *p_str);

#endif