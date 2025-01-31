#include <stdio.h>
int main(){
    char x[20];
    int y;
    char z[50];
    scanf("%s",&x);
    scanf("%d",&y);
    scanf("%s",&z);
    printf("Name: %s\n",x);
    printf("Age: %d\n",y);
    printf("Hobby: %s\n",z);
    return 0;
}