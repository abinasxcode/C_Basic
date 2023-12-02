#include<stdio.h>
int main(void) {
    int num =10;
    int n1 =0,n2 =1,i,n3;
    if (num==1){
        printf("%d",n1);
    }
    else{
        printf("%d %d", n1, n2);
        for(i = 2; i<num; i++){
            n3=n1+n2;
            n1=n2;
            n2=n3;
            printf("\t%d",n3);
        }
    }
    return 0;
}