#include <stdio.h>

int main(void)
{

    // variable declarations
    int i_SSG = 5;
    float f_SSG = 3.9f;
    double d_SSG = 8.041997;
    char c_SSG = 'A';
    
	//code
    printf("\n\n");
    
    printf("i_SSG = %d\n", i_SSG);
    printf("f_SSG = %f\n", f_SSG);
    printf("d_SSG = %lf\n", d_SSG);
    printf("c_SSG = %c\n", c_SSG);

    printf("\n\n");

    i_SSG = 43;
    f_SSG = 6.54f;
    d_SSG = 26.1294;
    c_SSG = 'P';
    
    printf("i_SSG = %d\n", i_SSG);
    printf("f_SSG = %f\n", f_SSG);
    printf("d_SSG = %lf\n", d_SSG);
    printf("c_SSG = %c\n", c_SSG);

    printf("\n\n");

    return(0);
}



