#include<stdio.h>
//Define a union representing a numeric value
union Numericvalue{
    int intvalue;
    float floatvalue;
    char stringvalue[20];
};
int main(){
    //Declare a variable of type union Numericvalue
    union Numericvalue value;
    //Assign a value to the union
    value.intvalue=42;
    //Assigning the union members
    printf("integer value:%d\n",value.intvalue);
    //Assigning a different value to the union
    value.floatvalue=3.14;
    //Accessing the union members 
    printf("Flont value:%.2f\n",value.floatvalue);

    return 0;

}
