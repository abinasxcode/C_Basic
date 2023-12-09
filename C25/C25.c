#include<stdio.h>
#include<math.h>
int main(){
    double root,a;

    printf("Enter the side of square:\t");
    scanf("%2lf",&a);

    root=sqrt(2*a*a);

    printf("Diagonal of square:\t%2lf\n",root);
    return 0;


}