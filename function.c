    #include<stdio.h>
    #include<cs50.h>

        float discount(float regular){

           float sale=regular*.85;
           return sale;




        }



        int main(void){

            float regular=get_float("enter your price: \n");

          float  sale=discount(regular);

            printf("%.2f \n",sale);

             int age =get_int(enter your old : \n);
             int result = 2*age;
             printf("%i \n",result)

        }
