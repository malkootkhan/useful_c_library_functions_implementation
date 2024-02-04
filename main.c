/*
This program is about to uncover and practically demonstrate the usage of assert function in c
we have to add header for assert as assert.h
assert is useful for debugging there is also a macro that enable and diable assert if assert doesn't work define that macro '#define NDEBUG' disable assert
when assert is used if the condition is false at run time it abort the program and display a message clear explanation about the error and the line number it also create some dumpfile to stor info
It is good practice to use assert to be clear more about the bug occurence and not process in the case of error condition
*/

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


int main()
{
	int a;
	a = 5;
	for ( int b=0; b < 10; b++ )
	{
		printf("The value of b: %d\n", b);
		assert(b < a);

	}
}

