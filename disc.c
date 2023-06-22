l#include<stdio.h>
#include<cs50.h>
float disc(float pric , int disc){

    float main=pric*(100-disc)/100;
    return main;
}

int main(){
    float price=get_float("enter your price: ");
    int discount=get_int("enter your discount: ");
    float sale=disc(price,discount);
    printf("%.2f \n",sale);


}
