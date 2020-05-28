#include <stdio.h>

int main(void)
{
	//variable declarations
	int a_SSG = 5;
	int b_SSG = 10;

	//code
	printf("\n\n");
	printf("A = %d\n", a_SSG);
	printf("A = %d\n", a_SSG++);
	printf("A = %d\n", a_SSG);
	printf("A = %d\n\n", ++a_SSG);

	printf("B = %d\n", b_SSG);
	printf("B = %d\n", b_SSG--);
	printf("B = %d\n", b_SSG);
	printf("B = %d\n\n", --b_SSG);

	return(0);
}
