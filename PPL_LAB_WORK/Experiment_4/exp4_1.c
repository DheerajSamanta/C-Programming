/* Find the biggest of the 3 numbers */
#include<stdio.h>
int main(){
    int num1 ,num2,num3;
    printf("\n TO DETERMINE THE BIGGEST OF THREE NUMBERS:");
    printf("\n Enter the three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    if (num1>num2&&num1>num3){
        printf("%d is the biggest the numbers:)",num1);
    }
     else if (num2>num1&&num2>num3){
        printf("%d is the biggest the numbers:)",num2);
    }
    else{
         printf("%d is the biggest the numbers:)",num3);
    }

return 0;

}
