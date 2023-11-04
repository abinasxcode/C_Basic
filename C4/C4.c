#include<stdio.h>

int main(){
  int numbers[5];//Declares an integer array with a size of 5 elements

  //assign values to the array elememts 

    numbers[0]=10;
    numbers[1]=20;
    numbers[2]=30;
    numbers[3]=40;
    numbers[4]=50;

    //Display the values stored im the array
    printf("values in the array:");
    for (int i = 0; i < 5; i++){
      printf("%d\n",numbers[i]);
    }
    printf("\n");

    return 0;
    
    
  
    }
    
