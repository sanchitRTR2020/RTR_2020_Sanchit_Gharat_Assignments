#include <stdio.h>

int main(void)
{
	//variable declarations
	int a_SSG;
	int b_SSG;
	int x_SSG;

	//code
	printf("\n\n");
	printf("Enter A Number : ");
	scanf("%d", &a_SSG);

	printf("\n\n");
	printf("Enter Another Number : ");
	scanf("%d", &b_SSG);

	printf("\n\n");

	//Since, In All The Following 5 Cases, The Operand on The Left 'a' Is Getting Repeated Immeiately On The Right (e.g : a = a + b or a = a -b),
	//We Are Using Compound Assignment Operators +=, -=, *=, /= and %=

	//Since, 'a' Will Be Assigned The Value Of (a + b) At The Expression (a += b), We Must Save The Original Value Of 'a' To Another Variable (x)
	x_SSG = a_SSG;
	a_SSG += b_SSG; // a = a + b
	printf("Addition Of A = %d And B = %d Gives %d.\n", x_SSG, b_SSG, a_SSG);

	//Value Of 'a' Altered In The Above Expression Is Used Here...
	//Since, 'a' Will Be Assigned The Value Of (a - b) At The Expression (a -= b), We Must Save The Original Value Of 'a' To Another Variable (x)
	x_SSG = a_SSG;
	a_SSG -= b_SSG; // a = a - b
	printf("Subtraction Of A = %d And B = %d Gives %d.\n", x_SSG, b_SSG, a_SSG);

	//Value Of 'a' Altered In The Above Expression Is Used Here...
	//Since, 'a' Will Be Assigned The Value Of (a * b) At The Expression (a *= b), We Must Save The Original Value Of 'a' To Another Variable (x)
	x_SSG = a_SSG;
	a_SSG *= b_SSG; // a = a * b
	printf("Multiplication Of A = %d And B = %d Gives %d.\n", x_SSG, b_SSG, a_SSG);

	//Value Of 'a' Altered In The Above Expression Is Used Here...
	//Since, 'a' Will Be Assigned The Value Of (a / b) At The Expression (a /= b), We Must Save The Original Value Of 'a' To Another Variable (x)
	x_SSG = a_SSG;
	a_SSG /= b_SSG; // a = a / b 
	printf("Division Of A = %d And B = %d Gives Quotient %d.\n", x_SSG, b_SSG, a_SSG);

	//Value Of 'a' Altered In The Above Expression Is Used Here...
	//Since, 'a' Will Be Assigned The Value Of (a % b) At The Expression (a %= b), We Must Save The Original Value Of 'a' To Another Variable (x)
	x_SSG = a_SSG;
	a_SSG %= b_SSG; // a = a % b
	printf("Division Of A = %d And B = %d Gives Remainder %d.\n", x_SSG, b_SSG, a_SSG);

	printf("\n\n");

	return(0);
}
