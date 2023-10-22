#include<stdio.h>

int main()
{
    double USD_amount , GBP_amount , JPY_amount , exchange_fee;

    printf("enter the amount in US dollar: ");
    scanf("%lf", &USD_amount);

    exchange_fee=0.10 * USD_amount;
}