#include <stdio.h>  
#include <string.h> 


// Define a structure representing a person  

struct Person {  
    
    char name[50];  

    int age; 

    float height;  
};  
   
int main(){  
    // Declare a variable of type struct Person  
    struct Person person1;  
   
    // Assign values to the structure members 

    strcpy(person1.name, "John Doe");  person1.height = 1.8;  
   
    // Accessing the structure members 

    printf("Name: %s\n", person1.name);  



    printf("Age: %d\n", person1.age);  


    printf("Height: %.2f\n", person1.height);  
   
    return 0;  
}    
