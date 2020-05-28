#include <stdio.h>

int main(void)
{
	//variable declarations
	int a_SSG;
	int b_SSG;
	int result_SSG;

	//code
	printf("\n\n");
	printf("Enter A Number : ");
	scanf("%d", &a_SSG);

	printf("\n\n");
	printf("Enter Another Number : ");
	scanf("%d", &b_SSG);

	printf("\n\n");

	// *** The Following Are The 5 Arithmetic Operators +, -, *, / and % ***
	// *** Also, The Resultants Of The Arithmetic Operations In All The Below Five Cases Have Been Assigned To The Variable 'result' Using the Assignment Operator (=) ***
	result_SSG = a_SSG + b_SSG;
	printf("Addition Of A = %d And B = %d Gives %d.\n", a_SSG, b_SSG, result_SSG);

	result_SSG = a_SSG - b_SSG;
	printf("Subtraction Of A = %d And B = %d Gives %d.\n", a_SSG, b_SSG, result_SSG);

	result_SSG = a_SSG * b_SSG;
	printf("Multiplication Of A = %d And B = %d Gives %d.\n", a_SSG, b_SSG, result_SSG);

	result_SSG = a_SSG / b_SSG;
	printf("Division Of A = %d And B = %d Gives Quotient %d.\n", a_SSG, b_SSG, result_SSG);

	result_SSG = a_SSG % b_SSG;
	printf("Division Of A = %d And B = %d Gives Remainder %d.\n", a_SSG, b_SSG, result_SSG);

	printf("\n\n");

	return(0);
}
