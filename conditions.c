#include <cs50.h>
#include <stdio.h>

int main(void)

{
    // Prompt use for x
    int x = get_int("x: ");

    // Prompt use for y
    int y = get_int("y: ");

    // Compare x and y
    if(x <y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is grater than y\n");
    }
    else
    {
        printf("x is qual to y\n");
    }
}

//terminal type
// make conditions
// type ./conditions
// than give number 1 and then number 2


// ~/workspace/Harvard/ (section1) $ ./conditions
// x: 2
// y: 1
// x is grater than y
// ~/workspace/Harvard/ (section1) $ ./conditions
// x: 2
// y: 2
// x is qual to y
// ~/workspace/Harvard/ (section1) $ ./conditions