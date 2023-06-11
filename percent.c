 #include<stdio.h>
    #include<cs50.h>

   int discount(int n, int ){

   int disc=n*.85;
   return disc;
   }


    int main() {

        float price=get_float("enter your price: \n");
        int disc=discount(price);
        printf("Your discounted price = %i \n",disc);

}
