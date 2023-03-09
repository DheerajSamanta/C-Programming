/*   Given value of 'n'.Find the sum of the series 1+1/2+1/3+.......1/n    */
#include<stdio.h>
int main(){
    float num,sum=0;
    printf("TO CALCULATE THE SUM OF THE SERIES:1+1/2+1/3......1/n \n");
    printf("Enter the value of 'n': ");
    scanf("%f",&num);
    for(float i=1;i<=num;i++){
        sum=sum+1/i;
    }
    printf("\n The sum of your required series is %f",sum);
    return 0;
}