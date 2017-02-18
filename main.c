#include <math.h>
#include <stdio.h>
#include "func.h"
/*
 * this program is a test when learning c languege!
 * history:
 *  	 20161226 zeng yan release
 */



int main(void)
{
	/*chapter 1*/
	printf("Helloworld\n");
	printf("Goodbye, ");
	printf("curel world!\n");
	printf("character: %c\ninterger: %d\nfloating point: %f\n", '}',
	       34, 3.14);
	/*chapter 2*/
	int hour, minute;
	hour = 11;
	minute = 59;
	printf("current time is  %d:%d\n", hour, minute);

	/*2.1 expression*/
	int total_minute;
	total_minute = hour * 60 + minute;
	printf("%d:%d is %d minutes after 00:00\n", hour, minute,
	       total_minute);
	printf("'a'+2 = %c\n", 'a' + 2);
	/*chapter 3 simple function*/
	newline();
	newline();
	double pi = 3.1416;
	printf("sin(pi/2)=%f\nln(1)=%f\n", sin(pi / 2), log(1.0));
	newline();
	print_time(hour, minute);

	/*selection statement*/
	int x;
	x = 3;
	print_parity(13);
	print_parity(20);
	printf("n!=%d!=%d\n", x, factorial(x));
	x = -2;
	printf("n!=%d!=%d\n", x, factorial(x));

	/* definite structure*/
	struct complex_struct {
		double x, y;
	} z;
	double x1 = 2.3;
	z.x = x1;
	z.y = 5.4;
	if (z.y < 0)
		printf("z=%f%fi\n", z.x, z.y);
	else
		printf("z=%f+%fi\n", z.x, z.y);

	/*define structure addition*/
	
	struct complex_struct add_complex(struct complex_struct z1,
					  struct complex_struct z2) {
		z1.x = z1.x + z2.x;
		z1.y = z1.y + z2.y;
		
		return z1;
	}

	z = add_complex(z, z);
	printf
	    ("the real part of z is %f,\nthe imaginal part of z is %f.\n",
	     z.x, z.y);
	printf("please input a interger==>");
	scanf("%d", &x);
	printf("x=%d\n", x);
	
	/*define a for loop*/
	int i=1;
	int sum=0;
	for (i = 1; i < 5; i++) {
		sum = sum + i;
		printf("i=%d,sum=%d\n",i,sum);
	}

	return 0;
}
