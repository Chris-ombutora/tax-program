#include <stdio.h>

int main(void) {
    float gross_pay,tax_payable,net_pay;
    int dependants;


    printf("enter your gross pay :");
    scanf("%f",gross_pay);
    printf("enter the number of dependants :");
    scanf("%d",dependants);

    if (gross_pay>=10000) {
        tax_payable=gross_pay*1;//not taxed?????
    }else if (gross_pay>10000 && gross_pay<=20000) {
        if (dependants<3) {
            tax_payable=gross_pay*0.15;
        }else {
            tax_payable=gross_pay*0.1;
        }
        }

    else {
        if (dependants<3) {
            tax_payable=gross_pay*0.35;
        }else {
            tax_payable=gross_pay*0.25;
        }
    }


    net_pay=gross_pay*tax_payable;

    printf("the net pay is : %.2f",net_pay);
    printf("the tax payable is : %.2f",tax_payable);
    printf("the gross pay is  : %.2f",gross_pay);


    return 0;
}


//mambo ni deadly deadly