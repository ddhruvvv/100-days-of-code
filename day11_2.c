#include<stdio.h>
int main()
{
    int selling_price,cost_price;
    printf("enter cost price");
    scanf("%d",&cost_price);
    printf("enter selling price");
    scanf("%d",&selling_price);

    if(selling_price > cost_price) {
        float profit = selling_price - cost_price;
        float profit_percentage = (profit/cost_price)*100;
        printf("your profit percentage is %f",profit_percentage);
    }
    else {
        float loss = cost_price - selling_price;
        float loss_percentage = (loss/cost_price)*100;
        printf("your loss percentage is %f",loss_percentage);
    }
    
    return 0;
    

}