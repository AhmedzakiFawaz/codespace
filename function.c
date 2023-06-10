    #include<stdio.h>
    #include<cs50.h>

        float discount(float regular){

           float sale=regular*.85;
           return sale;



        }


        int main(void){

            float regular=get_float("enter your price: \n");


            printf("%.2f \n",discount);

        }
