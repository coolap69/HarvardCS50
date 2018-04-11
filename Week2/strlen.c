#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string s = get_string("Name: ");
    int n = 0;
    // while ("I'm not at the end of the string");
    while (s[n] != '\0')
    {
        n++;
    }
    printf("%i\n");
}