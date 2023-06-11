 #include<stdio.h>
    #include<cs50.h>

   int discount(int price, int percent){

    int sale=price*(100-percent)/100;
    return sale;

   }


    int main() {

        float regular=get_float("enter your price: \n");

        int percent=get_int("please enter discount: ");

      float sale=discount(regular, percent);
      printf("sale price : %f \n",sale);
}
