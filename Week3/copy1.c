#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // get a string
    char *s = get_string("s: ");

    if(!s)
    {
        return 1;
    }
    printf("s: %s\n", s);
    printf("t: %s\n", t);
    }