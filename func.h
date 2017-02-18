/*func.h*/
/* 
 * this file is the head file of func.c
 * history:
 * 	20161229 zeng yan release
 */
#ifndef FUCC_H
#define FUNC_H

/*define a new funtion newline*/
extern void newline(void);

/*difine a function to print time from hour and minute*/
extern void print_time(int hour, int minute);

/* print page even or odd*/
extern void print_parity(int x);

/* function calculate factoral n, n!*/
extern int factorial(int n);
#endif
