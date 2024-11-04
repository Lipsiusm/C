#Author: Matthew Lipsius
#Date:
#Purpose: Script file to assist in validating C strings through system calls to python

#verify python's reverse string matches our reverse string
def verify_str_rev(s,r):
	if s[::-1] == r:
		return True
	else:
		return False

#verify python's comparison matches our string comparison
def verify_str_eq(x,y):
	if(x == y):
		return True
	else:
		return False

def hello():
	print("Hello World")