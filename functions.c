#include<stdio.h>
#include<cs50.h>

void hello(int n )//argument
{

   for(int i=0; i<n ; i++)

   {
   printf("gg\n");
   }
}
void sum(int n1, int n2){

   printf("%i\n",n1+n2);
}


int main (void)

{

hello( 55);
sum(25, 55);

}
