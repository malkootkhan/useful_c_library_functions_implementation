#include <stdlib.h>
#include <stdio.h>

/*
 *This function 'atexit' is alibrary function used for failure condition 
 *it takes function address as argument in other words function pointer is the argument
 *It call that function at specific condition as demonstrated below
 *if the input is integer it will not go the if condition else will enter the if condition and call false_func as well
 */
void true_func(void)
{
	printf("true condition....\n");
}
void false_func(void)
{
	printf("false condition....\n");
}

int main()
{
	int n;
	//test function
	atexit(true_func); // passing the function address like atexit(void(*truet_func)void)
	if(scanf("%d", &n) != 1)
	{
		printf("it is no integer\n");
		atexit(false_func);
		exit(EXIT_FAILURE);
	}
	
   return 0;
}

