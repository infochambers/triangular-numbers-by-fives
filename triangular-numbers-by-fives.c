﻿//    A program that generates a table of every 5th triangular number from five to 
//    fifty using “triangularNumber = n (n + 1) / 2”. 

//    Do the standard initial C bits
#include <stdio.h>

int main (void)
{

//    Declare integer variables of:
//    triangularNumber, also initialized, for the triangular number
//    n, for the incrementation and math
	int triangularNumber = 0, n;

//    For loop:
//    Initial:  Start n at 5
	for ( n = 5;

//    Looping conditions: n being less than 51
		n < 51;

//    Evaluation:  increment n by 5
		n += 5 )
	{
//    Generate the current triangular number
		triangularNumber = n * (n + 1) / 2 ;

//    Print the current n
		printf ("The triangular number for %i is %i.\n\n", n, triangularNumber);
	}
//    There is nothing to return
	return 0;
}
