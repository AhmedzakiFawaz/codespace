 #include<stdio.h>
    #include<cs50.h>

    int discount(int sale){

      int price=sale*.85;
      return price;
    }

    int main() {


int regular=get_int("enter your regular price: ");
int sale=discount(regular);
printf("%i \n",sale);
}