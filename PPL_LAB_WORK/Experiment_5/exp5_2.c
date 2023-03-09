/* Multiple two given numbers without using the arithemetic binary multiplication operator using for loop*/
#include<stdio.h>
int main(){
    int num1, num2,prod;
    printf("MULTIPLICATION OF TWO NUMBERS WITHOUT USING ARITHEMETIC BINARY MULTIPLICATION OPERATOR \n");
    printf("\n Enter the 1st number: ");
    scanf("%d",&num1);
    printf("\n Enter the 2nd number: ");
    scanf("%d",&num2);
    for(int i=1;i<=num2;i++){
        prod=num1*i;
    }
    printf("%dx%d=%d",num1,num2,prod);
    return 0;
}