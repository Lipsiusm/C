#include <stdio.h>
#include <stdbool.h>
#include "c_strings.h"

/*
Author: Matthew Lipsius
Date: 
Purpose: To define functions to assist in the following exercise
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
int str_len(const char *p_str_input){

	//check for null pointer
	if (p_str_input == NULL){
		printf("\nNull Pointer being passed at str_len\n");
		return -1;
	}
	int length;
	length = 1;

	//while the character[length] != null terminator, keep looping
	while (*p_str_input != '\0'){
		//increment length
		length++;
		p_str_input++;
	}
	return length;
}

//concatenate 2 strings
int str_concat(const char *p_str1, const char *p_str2){

	int index;
	int length;
	index = 0;
	length = str_len(p_str1) + str_len(p_str2);
	printf("length is %d", length);

	//allocate result 
	char result[length];

	//if null pointer gtfo
	if (p_str1 == NULL || p_str2 == NULL){
		printf("\nNull Pointer being passed at str_concat\n");
		return -1;
	}

	else {
		//parse 1st string
		while(*p_str1 != '\0'){
			result[index] = *p_str1;
			index++;
			p_str1++;
		}
		//parse 2nd string
		while(*p_str2 != '\0'){
			result[index] = *p_str2;
			index++;
			p_str2++;
		}
		printf("\nThe two strings added are now one: %s\n", result);
		return 0;
	}
}

//check if 2 strings are equal
bool str_eq(const char *p_str1, const char *p_str2){

	//check for null pointer
	if(p_str1 == NULL || p_str2 == NULL){
		printf("\nNull Pointer being passed at str_eq\n");
		return -1;
	}

	//while they are the same, keep going
	while (*p_str1 == *p_str2 && *p_str1 != '\0' && *p_str2 != '\0'){
		p_str1++;
		p_str2++;
	}
	//if after the loop is done, and they arent equal, return false
	if (*p_str1 != *p_str2){
		return false;
	}
	else{
	//otherwise return true
		return true;
	}
}

//reverse a string
int str_rev(char *p_str){
	
	//check for null pointer
	if (p_str == NULL){
		printf("\nNULL pointer being passed at str_rev\n");
		return -1;
	}

	int length;
	int index;

	//flexible result length
	length = str_len(p_str);
	char result[length];
	index = 0;

	//go to end of string
	while(*p_str != '\0'){
		p_str++;
	}

	//go to first char after null terminator
	p_str--;

	//reverse string
	while (length != 0){
		result[index] = *p_str;
		index++;
		p_str--;
		length--;
	}
	printf("Your reverse string is %s\n", result);
	return 0;
}