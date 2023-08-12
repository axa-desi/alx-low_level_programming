/*
 * File: 0-positive_or_negative.c
 * Auth: Axa Desi
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
  * main - Check if number.
  * @void: Null valu
  * Description:state whathr is positive, negative or zero
  * Return: Always 0.
  */
int main(void)
{
		int n;
		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/*your code goes here*/
		if (n > 0)
			printf("%d is positive\n",n);
		else if (n <0)
			printf("%d is negetive\n",n);
		else
			printf("%d is zero\n",n)	
		return (0;)
}
