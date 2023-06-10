#include<stdio.h>
#include<cs50.h>

//void functions

   void hello(intn)

      {
         int i;
         for(i=0; i<25; i++){
            printf("meow\n");
         }

      }

   //variable functions
   void variable(int n)
      {
            int x;
            for(x=0; x<n; x++)
            {
            printf("hello\n");
            }

      }
     

   int main (void)
      {

        hello(30);
         variable(25);

      }
