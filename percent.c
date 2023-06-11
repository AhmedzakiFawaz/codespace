 #include<stdio.h>
    #include<cs50.h>

   int discount(int n){

   int disc=n*.85;
   return disc;
   }


    int main() {

        float price=get_float("enter your price: \n");

        int disc=get_int("please enter discount: ");
      
      int  percent=price*(100-discount)/100;

        printf("%i \n",percent);




}
