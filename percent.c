 #include<stdio.h>
    #include<cs50.h>


    int fun(int num1, int disc ){

    int percent=num1*.85;
    return percent;
    int disc=num1-(100-disc)/100;

 }

    int main() {


     float  num1=get_int("enter your price: ");
     int disc=get_int("enter your discount: ")
     int sale=fun(num1, disc);
     printf("%i \n",sale);
      printf("%i \n",disc);


}