#include<stdio.h>
#include<cs50.h>
int main (void){
    char c=get_char('Do you agree?')
    if (c=='Y'||c=='y'){
        printf("you are agree");

    }
     else if(C='n'||'N'){
        printf("you are Not agree");
     }
     else{
        printf(" Please enter right option");
     }
}