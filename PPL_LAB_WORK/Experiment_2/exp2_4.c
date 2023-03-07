//multiply two numbers with out using arthemetic operators(*)//
#include<stdio.h>
int main(){
    int num1,num2,sum=0;
    printf("Enter the 1st factor: \n");
    scanf("%d",&num1);
    printf("Enter the 2nd factor:\n");
    scanf("%d",&num2);
   for(int i=1;i<=num2;i++){
    sum=sum+num1;
}
printf("the product of two numbers without using'*' operator\n");
printf("%dx%d=%d",num1,num2,sum);
return 0;
}