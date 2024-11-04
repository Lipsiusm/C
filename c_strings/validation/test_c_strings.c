#include <stdio.h>
//#include <>
#include <stdlib.h>
#include <stdbool.h>
#include <Python.h>
#include <uuid/uuid.h>
#include <string.h>
#include "../c_strings.h"
#include "../c_strings.c"
/*
gcc -I/usr/include/python2.7 test_c_strings.c -luuid -lpython2.7
Author: Matthew Lipsius
Date: 
Purpose: This code is to unit test the functions written for string manipulation on Udemy - C programming for beginners.
		 This includes the following functions str_len, str_add, str_eq, and str_rev.
		 This will be done with the standard string library with the alphabetical ASCII values of 65-122

		 Test Cases: Pass in one or two NULL pointers, expecting -1 either way
		 			 Pass in valid pointers to char arrays, expecting results to match standard libary function output
		 			 
		 Assumptions: Assuming we are getting an unmanipulated pointer that points to the beggining of a string
		 			  Assuming pointers of manipulated strings do not need to be repointed to starting positions
		
*/

//initialize testing variables
char * pNull1 = NULL;
char * pNull2 = NULL;
uuid_t bin_uuid;

int main(){

	char *uuid_0 = malloc(37);
	char *uuid_1 = malloc(37);
	char *uuid_2 = malloc(37);

	//creating random strings
	uuid_generate_random(bin_uuid);
	uuid_unparse(bin_uuid, uuid_0);

	uuid_generate_random(bin_uuid);
	uuid_unparse(bin_uuid, uuid_1);

	uuid_generate_random(bin_uuid);
	uuid_unparse(bin_uuid, uuid_2);
	// printf("uuid 0 is %s\nuuid 1 is %s\nuuid 2 is %s\n",uuid_0,uuid_1,uuid_2);
	Py_Initialize();


	//initilize python objects
	PyObject *name, *load_module, *func, *callfunc, *args;
	//open, load test.py
	name = PyUnicode_FromString((char*)"test");
	load_module = PyImport_Import(name);
	//try to call hello word, get segmentation fault. func returns NULL
	func = PyObject_GetAttrString(load_module,(char*)"hello");
	//args = PyTuple_Pack(2, PyUnicode_FromString(uuid_0), PyUnicode_FromString(str_rev(uuid_0)));
	callfunc = PyObject_CallObject(func, NULL);
	//bool out = PyFloat_AsDouble(callfunc);
	//printf("out is %d\n", out);
	return 0;


	// name = PyUnicode_FromString((char*)"test_c_strings");
	// load_module = PyImport_Import(name);
	// printf("\nfricksakes\n");
	// func = PyObject_GetAttrString(load_module,(char*)"verify_str_rev");
	// if (func!= NULL){
	// 	args = PyTuple_Pack(2, PyUnicode_FromString(uuid_0), PyUnicode_FromString(str_rev(uuid_0)));
	// 	callfunc = PyObject_CallObject(func, args);
	// 	bool out = PyFloat_AsDouble(callfunc);
	// 	printf("out is %d\n", out);
	// 	return 0;
	// }
	// else{
	// 	Py_Finalize();
	// 	printf("frick sakes\n");

	// }

	

}