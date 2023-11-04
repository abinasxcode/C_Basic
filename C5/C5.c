#include<stdio.h>

int main(){
   int  clrscr();
    int a;
    printf(" \n\nEnter  value of integer  number to print it's Table : ");
    scanf("%d",&a);

    
    printf("\nPrinting of Table of : \t %d\n",a);
    
   // printf("%d",a);


    for(int i=1;i<=10;i++){

       

        printf("Green\033[0;32m");

        printf("\n%d * %d = %d\n ",a,i,a*i);


    }

    return 0;
}