
#include <stdio.h>
#include <cs50.h>

int main(void)
{
   char c=get_char("do you agree");

   if (c=='Y'|| c=='y'){
    printf("You are agree");
    }
    else if (c=='n'|| c=='N'){
     printf("You are  not agree");
    }

    else{
        ("please enter valid number");
    }



}