//lsInteger arithmetic

#include <cs50.h>
#include <stdio.h>

int main(void)

{
    // Prompt use for x
    int x = get_int("x: ");

       // Prompt use for y
    int y = get_int("y: ");

        //Perfomr arithmetic
    printf("%i plus %i is %i\n", x, y, x + y);
    printf("%i minus %i is %i\n", x, y, x - y);
    printf("%i times %i is %i\n", x, y, x * y);
    printf("%i divided by %i is %i\n", x, y, x / y);
    printf("remainder of %i divided by %i is %i\n", x, y, x % y);

}

//terminal type
// make ints
// type ./ints
// than give number 1 and then number 2