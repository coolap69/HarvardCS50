#include <cs50.h>
#include <stdio.h>

int main(void)

{
    // Prompt use for x
    float x = get_float("x: ");

    // Prompt use for y
    float y = get_float("y: ");

    // Return division
    printf("%f divided by %f is %f\n", x, y, x  /y);
}
//terminal type
// make floats
// type ./floats
// than divide the number you want

//float is use to recognize numbers that are not intergents