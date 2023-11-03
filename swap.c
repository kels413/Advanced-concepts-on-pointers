#include <stdio.h>
#include <stdlib.h>

/***
 * swap - function that swaps two Numbers
 * @num1 - parameter1
 *@num2  - parameter2
 * Return - theres nothing to return since its a void function.
 */

void	swap(int *num1, int *num2)
{
	int	temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

/***
 * Description - this is a function that swaps two element without
 * using a temp variable,
 * N:B this is might not be so efficient compared to using the standard temporary     * variable but its for
 * practicing of swaping without a temp. (Dont use in  real world)
 * swap2 - function that swaps two Numbers without a temporary    * variable.
 * @num1 - parameter1
 * @num2  - parameter2
 * Return - theres nothing to return since its a void function.
 */

void	swap2(int *num1, int *num2)
{
	*num1 = *num1 + *num2; /*10 + 5 == 15;  store in num1 = 15;*/
	*num2 = *num1 - *num2; /* 15 - 5 == 10;  store in  num2 == 10*/
	*num1 = *num1 - *num2; /*10 - 5 ==  5;   store back to num1 == 5*/
}

int	main(void)
{
	int num1 = 10;
	int num2 = 5;

	printf("num1 before swap: [%d] num2 before swap [%d]\n ", num1, num2);

	swap2(&num1, &num2); /*swap2 function*/

	printf("Num1 after swap [%d]: Num2 after swap [%d]\n ", num1, num2);

	return (0);
}