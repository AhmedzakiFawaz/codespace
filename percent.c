 #include<stdio.h>
    #include<cs50.h>


    int fun(int num1 ){

    int percent=num1*.85;
    return percent;

 }

    int main() {


     float  num1=get_int("enter your price: ");
     int sale=fun(num1);
     printf("%i \n",sale);



}