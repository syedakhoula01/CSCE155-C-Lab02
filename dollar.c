#include<stdio.h>

int main()
{
    double USD_amount , GBP_amount , JPY_amount , exchange_fee;

    printf("enter the amount in US dollar: ");
    scanf("%lf", &USD_amount);

    exchange_fee=0.10 * USD_amount;

    GBP_amount= 0.5 * (USD_amount - exchange_fee) * 0.79;
    JPY_amount=0.5 * (USD_amount-exchange_fee) * 127.65;

    printf("GCB amount : %.2lf\n" , GBP_amount);
    printf("JPY amount : %.1lf\n", JPY_amount);

    return 0;


}