#include <stdio.h>

int main(void)
{

	//variable declaration
	int a_SSG;
	int b_SSG;
	int result_SSG;

	//code
	printf("Enter First Integer: ");
	scanf("%d",&a_SSG);

	printf("\nEnter Second Interger: ");
	scanf("%d",&b_SSG);

	printf("\nIf Number is = 0, it is 'FASLS'.");
	printf("\nIf Number is = 1, it is 'TRUE'.\n\n");

	result_SSG = (a_SSG < b_SSG);
	printf("(a < b) A = %d is less the B = %d                  \t Answer = %d\n",a_SSG, b_SSG, result_SSG);

	result_SSG = (a_SSG > b_SSG);
	printf("(a > b) A = %d is greter the B = %d                \t Answer = %d\n",a_SSG, b_SSG, result_SSG);

	result_SSG = (a_SSG <= b_SSG);
	printf("(a <= b) A = %d is less than or equal to B = %d    \t Answer = %d\n",a_SSG, b_SSG, result_SSG);

	result_SSG = (a_SSG >= b_SSG);
	printf("(a >= b) A = %d is greater then or equal to B = %d \t Answer = %d\n",a_SSG, b_SSG, result_SSG);

	result_SSG = (a_SSG == b_SSG);
	printf("(a == b) A = %d is equal to B = %d                 \t Answer = %d\n",a_SSG, b_SSG, result_SSG);

	result_SSG = (a_SSG != b_SSG);
	printf("(a < b) A = %d is not equal to B = %d              \t Answer = %d\n",a_SSG, b_SSG, result_SSG);

        return(0);
}