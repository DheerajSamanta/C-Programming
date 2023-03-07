/* Find the biggest of three numbers */
#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter the 1st number: ");
    scanf("%d",&num1);
    printf("Enter the 2nd number: ");
    scanf("%d",&num2);
    printf("Enter the 3rd number: ");
    scanf("%d",&num3);
       if(num1>num2&&num1>num3){
        printf("%d is the biggest of all three numbers:",num1);
       }
       else if(num2>num1&&num2>num3){
        printf("%d is the biggest of all three numbers:",num2);
       }
       else{
        printf("%d is the biggest of all three numbers:",num3);
       }
       return 0;
}
