#include<stdio.h>
#include<cs50.h>

//void functions

   void hello(void)

   {
      int i;
      for(i=0; i<25; i++){
         printf("%i \n",i);
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
