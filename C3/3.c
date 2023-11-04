#include<stdio.h>
int main(){
    int x=0,y=0,result=0;

    printf("Enter first number;");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&y);

    result=x+y;
    printf("sum of 2 number:%d",result);
    return 0;
}