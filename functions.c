#include<stdio.h>
#include<cs50.h>


void first (void){

   for(int z=0; z<25; z++);
   printf("%i \n",z);
}



void hello(int n )//argument
{

   for(int i=0; i<n ; i++)

   {
   printf("gg\n");
   }
}



int sum(int n1, int n2){

 printf("%i\n",n1+n2);
   return n1+n2;
}


int main (void)

{
first();
hello();



int x= sum(25, 55);
int y=55;

printf("%i\n",x+y);



}
