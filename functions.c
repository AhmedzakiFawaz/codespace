#include<stdio.h>
#include<cs50.h>

void hello(int n )//argument
{

   for(int i=0; i<n ; i++)

   {
   printf("gg\n");
   }
}


int sum(int n1, int n2){


  int result=n1+n2;
   return result;
}


int main (void)

{


int x= sum(25, 55);
int y=55;

printf("%i\n",x+y);


}
