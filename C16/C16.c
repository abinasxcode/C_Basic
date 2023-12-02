#include<stdio.h>

int main(){
    int a;
    printf("\nEnter the integer:");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("\nInteger is even");
        
    }
    else
    {
        printf("\nInteger is odd\n");
        printf("Reminder %d",a%2);
    }
    
    return 0;
}