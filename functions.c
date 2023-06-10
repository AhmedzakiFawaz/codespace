#include<stdio.h>
#include<cs50.h>

//void functions

   void hello(void)

   {

      for(i=0; i<25; i++){
         printf("meow\n");
      }

   }

   //variable functions
   void variable(int n)
   {
   int x;
   for(x=0; x<n; x++){
   printf("%i \n",x);
   }

   }


   int main (void)

   {
      hello();
      variable(25);



   }
