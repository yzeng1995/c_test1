#include <stdio.h>
/*func.c*/
/*this file is the function used in helloworld.c*/
/*
 *history:
 *	20161228 zeng yan release
 */
/*define a new funtion newline*/
void newline(void)
{
	printf("\n");
}

/*difine a function to print time from hour and minute*/
void print_time(int hour, int minute)
{
	printf("%d:%d\n", hour, minute);
}

/* print page even or odd*/
void print_parity(int x)
{
	if (x % 2 == 0)
		printf("x=%d is even\n", x);
	else
		printf("x=%d is odd\n", x);
}

/* function calculate factoral n, n!*/
int factorial(int n)
{
	if (n == 0)

		return 1;
	else if (n > 0) {

		return n * factorial(n - 1);
	} else {
		printf("the input is wrong./n");
		
		return 1;
	}
}


