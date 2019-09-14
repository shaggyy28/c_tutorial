#include<stdio.h>
// d, i	Integer values output as a decimal number
// u	Unsigned integer values output as a decimal number
// f	Floating point (real) values, float or double
// e, E	Floating point values output using scientific notation
// g, G	Floating point values output using scientific notation if the value is huge or as a real value if it’s small
// c	Character values output as a single character (text)
// s	Strings output as text
// x, X	Integer values output as hexadecimal, upper or lower case letters
// o	Integer values output as octal
// p	Memory address (pointer variable) output usually in hexadecimal
// %	Used to output a %

int main(int argc, char const *argv[])
{
    int i = 10;
    float f = 150.2658;

    printf("integer %%i %i\n", i);
    printf("integer %%d %d\n", i);
    printf("integer %%g %g\n", f);
    printf("integer %%e %e\n", f);
    printf("integer %%x %x\n", i);
    printf("integer %%o %o\n", i);
    return 0;
}
