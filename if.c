#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char c;

    while (true)
    {
        c = get_char("Do you agree? ");

        if (c == 'Y' || c == 'y')
        {
            printf("You are agree.\n");
            break;
        }
        else if (c == 'N' || c == 'n')
        {
            printf("You are not agree.\n");
            break;
        }
        else
        {
            printf("Please enter a valid option.\n");
        }
    }

}