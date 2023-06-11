 #include<stdio.h>
    #include<cs50.h>

   int discount(int n){

   int disc=n*.85;
   return disc;
   }


    int main() {

        float price=get_float("enter your price: \n");

        int disc=discount(price);
        printf("Your discounted price = %i \n",disc);

        int   discount=get_int("enter your discount: \n");
       float  percent=(100-discount/100);
         float   final=percent*price;
        printf("%f \n",final);




}
