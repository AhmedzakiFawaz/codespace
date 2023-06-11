    #include<stdio.h>
    #include<cs50.h>
    //void function
    void type1(void){

        printf("Meow\n");
    }
    //paramater function
    void type2(int num1, int num2){

      int sum=num1*num2;
       printf("%i \n",sum);

    }
//return function
        int type3(float x){
        int price=x*.85;
        return price;



       }
        int type4(float price, int disc){

                float final=price*(100-disc)/100;
                return final;




        }

    int main(){
        type1();
         type1();
         type2(5, 10);

         float price=get_float("enter your estimaited price: ");
         float sum=type3(price);
         printf("price after discount is= %.2f \n",sum);

         float price2=get_float("enter your second price : \n");
         int disc=get_int("enter your discount: \n");
        int final=type4(price,disc);
        printf("total price after discount is:%i ",final);


    }