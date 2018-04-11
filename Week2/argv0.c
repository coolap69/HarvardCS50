#include <cs50.h>
#include <stdio.h>
    //argument count
int main (int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[0]);
    }
    else
    {
        printf("hello, world\n");
    }
}