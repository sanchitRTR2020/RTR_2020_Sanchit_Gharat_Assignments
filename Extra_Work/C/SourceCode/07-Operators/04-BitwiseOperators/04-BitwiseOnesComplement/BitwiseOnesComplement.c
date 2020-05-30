#include<stdio.h>

int main(void)
{
	//function prototype
	void PrintNoInBinaryFormat(unsigned int);
	
	//variable declaration
	unsigned int a_SSG;
	unsigned int result_SSG;

	//code
	printf("Enter Integer : ");
	scanf("%u",&a_SSG);

	result_SSG = ~a_SSG;
	printf("Bitwise Complement of A = %d (decimal) gives result = %d (decimal).\n\n", a_SSG, result_SSG);

        PrintNoInBinaryFormat(a_SSG);	
        PrintNoInBinaryFormat(result_SSG);
	return(0);
}

//funclution defination

void PrintNoInBinaryFormat(unsigned int a_SSG)
{
	//variable declaration
	int i = 0;

	for(i = 15 ; i >= 0 ; i--)
	{

		printf("%d",(a_SSG >> i) & 1 );

		if((i%8 == 0) || (i%8 == 8))
		{
			//give space 
			printf(" ");
		}

	}
	printf("\n");
}
