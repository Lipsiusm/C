#include <stdio.h>
#include <stdbool.h>
#include "c_strings.h"

char hello[] = "Hello";
char world[] = "World";
char *p_hello = hello;
char *p_world = world;
bool is_equal;
int length;


int main (){

	//length = str_add(p_hello, p_world); //+ str_len(p_world));
	//printf("length is %d\n", length);
	//is_equal = str_equal(p_hello, p_world);
	//printf("\nYour boolean variable is: %s\n", is_equal ? "true" : "false");
	str_rev(p_hello);
	return 0;
}