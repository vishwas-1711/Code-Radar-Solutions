#include<stdio.h>
int main(){
    int cost_price,selling_price;
    scanf("%d%d",&cost_price,&selling_price);
    if(cost_price<selling_price){
        printf("Profit\n");
    }
    else if(cost_price>selling_price){
        printf("Loss\n");
    }
    else(cost_price=selling_price);{
        printf("No Profit No Loss\n");
    }
    return 0;
}