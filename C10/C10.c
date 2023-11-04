#include<stdio.h>  
   
// Define an enumeration for days of the week  
enum DaysOfWeek{  
    Monday, 

    Tuesday,  

    Wednesday,
      
    Thursday,  
    Friday,  
    Saturday,  
    Sunday  
};  
   
int main(){  
    // Declare a variable of type enum DaysOfWeek  
    enum DaysOfWeek today;  
   
    // Assign a value from the enumeration  
    today = Saturday;  
   
    // Accessing the enumeration value  
    printf("Today is %d\n", today);  

return 0;

}