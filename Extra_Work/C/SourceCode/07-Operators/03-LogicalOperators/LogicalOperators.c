#include <stdio.h>

int main(void)
{


	//variable decalration
	int a_SSG;
	int b_SSG;
	int c_SSG;
	int result_SSG;

	//code
	printf("\n Enter first integer: ");
	scanf("%d",&a_SSG);

	printf("\nEnetr second integer: ");
	scanf("%d",&b_SSG);

	printf("\nEnter third interger: ");
	scanf("%d",&c_SSG);

	printf("\nif answer = 0, it is FALSE");
	printf("\nif answer = 1, it is TRUE\n\n");

	result_SSG = (a_SSG <= b_SSG) && (b_SSG != c_SSG);
	printf("For LOGICAL AND(&&): Answer is TRUE(1) if and only if both conditions are TRUE.\n Answer is FALSE(0) if any one of the condition is false. \n\n");

	printf("A = %d is less then or equal to B = %d AND B = %d is not equal to C = %d Answer =%d\n",a_SSG, b_SSG, b_SSG, c_SSG, result_SSG);

        result_SSG = (b_SSG >= a_SSG) || (a_SSG == c_SSG);
        printf("\n\nFor Logical OR(||): Answer is TRUE(1) if any one of the condition is TRUE(1).\n Answer is FALSE(0) if both of the condition are FALSE(0).\n\n");

	printf("B = %d is greater then or equal to A = %d OR A= %d equal to C = %d Answer = %d\n",c_SSG, a_SSG, a_SSG, c_SSG, result_SSG);

	result_SSG = !a_SSG;
	printf("\n\nA = %d and using Logical NOT(!) Operator on A gives result = %d \n",a_SSG, result_SSG);

	result_SSG = !b_SSG;
	printf("B = %d and using Logical NOT(!) Operator on B gives result = %d \n",b_SSG, result_SSG);

	result_SSG = !c_SSG;
	printf("C = %d and using Logical NOT(!) Operator on C gives result = %d \n",c_SSG, result_SSG);
	


 	return(0);
}