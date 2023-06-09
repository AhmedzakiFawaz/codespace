#include<stdio.h>
#include<cs50.h>

//you should to use %f with float or double and //%c with char //ld or li with long

int main(void){

    string answer=get_string("what is your name?\n");
    printf("oh, hello %s\n",answer);

    int x=55;
    printf("oh, %i false",x);
}