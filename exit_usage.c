#include <stdlib.h>
#include <stdio.h>

/*
 *The exit function usage is explored here
 * actually when the condition fails it exit from the same point and not comming to main or to the function from which it gets invoked 
 *
 * */

FILE *test_func(char *file)
{
	FILE *fd;
	fd = fopen(file, "r");
	if(fd == NULL)
	{
		fprintf(stderr, "can't open %s\n", file);
		exit(EXIT_FAILURE);
	}
	return fd;
}

int main()
{
	FILE *fDesc;
	fDesc = test_func("test.txt");
	printf("The file successfully open\n");
	fclose(fDesc);
}
