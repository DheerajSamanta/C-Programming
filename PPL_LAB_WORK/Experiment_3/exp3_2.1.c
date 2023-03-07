//given two numbers//
//Demonstrate the swapping of the values(i)using a third variable//
#include<stdio.h>
int main(){
    int temp,num1=4,num2=5;
    printf("The given two numbers are:\nnum1=4 and num2=5\n");
    temp=num1;
    num1=num2;
    num2=temp;
    printf("The values of num1 and num2 are %d and %d respectively after sawpping (using third variable)",num1,num2);
    return 0;
}