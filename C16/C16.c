#include<stdio.h>

int main(){
    int a;
    printf("Enter the unteger:");
    scanf("%d",&a);

    if(0<a)
    {
        printf("integer is positive");
    }
    if(0>a)
    {
        printf("integer is negative");
    }
    
    return 0;
}