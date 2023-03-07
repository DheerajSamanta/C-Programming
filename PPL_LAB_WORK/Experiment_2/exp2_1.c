
/* Given two numbers.Calculate sum,difference,multiplication and division*/

#include<stdio.h>
int main(){
int  num1,num2,prod,sum,sub,div;
    printf(" Hello World \n");
    printf("Enter num1: ");
    scanf("%d",&num1);
     printf("Enter num2: ");
    scanf("%d",&num2);
    div=num1/num2;
    prod=num1*num2;
    sum=num1+num2;
    sub=num1-num2;
 printf(" The division of num1 and num2=%d\n",div);
 printf(" The product of num1 and num2=%d\n",prod);
 printf(" The sum of num1 and num2=%d\n",sum);
 printf(" The subtraction of num1 and num2=%d\n",sub);
return 0;
}
