#include <stdio.h>
int main(void)
{
	//code
    printf("\n\n");
    printf("**************************************************************************************");
    printf("\n\n");

    printf("Hello World !!!\n\n");

	int a_SSG = 13;
	printf("Integer Decimal Value Of 'a' = %d\n", a_SSG);
	printf("Integer Octal Value Of 'a' = %o\n", a_SSG);
	printf("Integer Hexadecimal Value Of 'a' (Hexadecimal Letters In Lower Case) = %x\n", a_SSG);
	printf("Integer Hexadecimal Value Of 'a' (Hexadecimal Letters In Lower Case) = %X\n\n", a_SSG);

	char ch_SSG = 'A';
	printf("Character ch = %c\n", ch_SSG);
	char str_SSG[] = "AstroMediComp's Real Time Rendering Batch 3.0 (2020-2021)";
	printf("String str = %s\n\n", str_SSG);

	long num_SSG = 30121995L;
	printf("Long Integer = %ld\n\n", num_SSG);

	unsigned int b_SSG = 7;
	printf("Unsigned Integer 'b' = %u\n\n", b_SSG);

	float f_num_SSG = 3012.1995f;
	printf("Floating Point Number With Just %%f 'f_num' = %f\n", f_num_SSG);
	printf("Floating Point Number With %%4.2f 'f_num' = %4.2f\n", f_num_SSG);
	printf("Floating Point Number With %%6.5f 'f_num' = %6.5f\n\n", f_num_SSG);

	double d_pi_SSG = 3.14159265358979323846;
	printf("Double Precision Floating Point Number Without Exponential = %g\n", d_pi_SSG);
	printf("Double Precision Floating Point Number With Exponential (Lower Case) = %e\n", d_pi_SSG);
	printf("Double Precision Floating Point Number With Exponential (Upper Case) = %E\n\n", d_pi_SSG);
	printf("Double Hexadecimal Value Of 'd_pi' (Hexadecimal Letters In Lower Case) = %a\n", d_pi_SSG);
	printf("Double Hexadecimal Value Of 'd_pi' (Hexadecimal Letters In Upper Case) = %A\n\n", d_pi_SSG);
    
    printf("**************************************************************************************\n");
    printf("\n\n");
	return(0);
}
