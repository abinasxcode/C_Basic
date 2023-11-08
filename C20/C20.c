#include<stdio.h>
int main(){
int x=60;
int y=60;
int z=70;


if ((x==y)&&(x>z)) {
printf("x equals to  y\n");
printf("x is greater than z");

}
 

 /**
 if (x>z){
    printf("X is greater than z");
    }
    
else if (z>x){
    printf("Z is greater than x");
}

*/

else if((x==y)&&(x<z))

printf("z is greater than x and also x is equal to y\n");


else if(x>y)

printf("x is greater than y\n");

else if (x>y)

printf("x is less than y");

else 
printf("Jo bhi ho ");


return 0;



}