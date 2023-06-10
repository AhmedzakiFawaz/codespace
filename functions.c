#include<stdio.h>
#include<cs50.h>

void hello(int n )//argument
{

   for(int i=0; i<n ; i++)

   {
   printf("gg\n");
   }
}
void hello (void){

   for(int i=0; i<25; i++);
   printf("%i \n",i)
}


int sum(int n1, int n2){

 printf("%i\n",n1+n2);
   return n1+n2;
}


int main (void)

{


int x= sum(25, 55);
int y=55;

printf("%i\n",x+y);


}
