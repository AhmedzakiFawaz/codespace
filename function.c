    #include<stdio.h>
    #include<cs50.h>

        float discount(float regular){

           sale=discount*.85;
           return sale;



        }


        int main(void){

            float regular=get_float("enter your price: \n");

            sale=discount(regular);
            printf("%.2f \n",sale)

        }
