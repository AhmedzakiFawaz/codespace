 #include<stdio.h>
    #include<cs50.h>

   int discount(int n, int z){

   int disc=n*.85;
   int mm=price*(100-discount)/100;
   return disc;
   }



    }

    int main() {

        float price=get_float("enter your price: \n");

        int disc=discount(price);
        printf("Your discounted price = %i \n",disc);

        int   discount=get_int("enter your discount: \n");
      int  percent=sale( discount);

        printf("%i \n",percent);




}
