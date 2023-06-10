#include<stdio.h>
#include<cs50.h>

//void functions
      float sale(float price);

   void hello(intn)

      {
         int i;
         for(i=0; i<25; i++){
            printf("meow\n");
         }

      }

   //variable functions
   void variable(int n){
            int x;
            for(x=0; x<n; x++)
            {
            printf("hello\n");
            }

      }


     int num(int n1 , int n2) {

         return n1+n2;


     }

   int main (void)
      {

        hello(30);
         variable(25);
        int x= num(10,5);
       int y=x*25;
        printf("%d \n",x*y);



        float regular=get_float("enter your price: "){

        sale=discount(regular);
       printf("sale is : %.2f",sale);
      }


      float sale(float price){

         sale=price*.85;
         return sale;
      }
      }
