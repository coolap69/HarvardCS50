#include <cs50.h>
#include <stdio.h>

int main(void)

{
    char c = get_char("Answer: ");

    if (c == 'Y' || c =='y')
    {
        printf("yes\n");
    }
    else if (c == 'N' || c =='n')
    {
        printf("no\n");
    }
}

// terminal type
// make noswitch
// type ./noswitch
// Answer: Y
// yes


//Switch version same of above
// switch(c)
// {
//     case 'Y':
//     case 'y':
//         printf("yes\n");
//         break;
//     case 'N' :
//     case 'n' :
//         printf("no\n");
//         break;
//     }
// }