#include <stdio.h>

// Edit your answers here
double f_to_c(double f)
{
    return (f - 32) * 5/9; 
}

double c_to_f(double c)
{
    return (c * 9/5) + 32; 
}


// main function for your testing. Do not copy into Coursemology
int main() {
    double out;
    out = f_to_c(33.0);    // edit the input to test
    printf("Your function output is: %f\n", out);

    out = c_to_f(100.0);    // edit the input to test
    printf("Your function output is: %f\n", out);
    
    return 0;
}