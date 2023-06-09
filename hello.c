#include<stdio.h>
#include<cs50.h>
int main (void){



//string answer=get_string("what is your name?\n");
//printf("Hello, %s\n", answer);
//string Ahmed=get_string("what is your age?");
//printf ("oh, %s years\n ",Ahmed);
  //long num1 =get_long("Num1 :");
  //long num2 =get_long("Num2 :");

  //printf("%li\n",num1+num2);

 int num1 =get_int("Num1 :");
 int num2 =get_int("Num2 :");

  if(num1>num2){
   printf("the answer false!");

  }

   else if(num1==num2){

    printf("num1=num2");
   }

 else{

    printf("the answer right!");
  }



  string jak=get_string("what is your name?");
  printf("oh, hello %s",jak);


  }