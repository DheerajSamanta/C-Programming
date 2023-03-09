// Check weather a given year is leap year or not //
#include<stdio.h>
int main(){
    int year;
    printf("\nTO CHECK WEATHER THE YEAR IS LEAP OR NOT:)");
    printf("\n Enter the year:\n (YOU WANT TO CHECK) \n");
    scanf("%d",&year);
    if(year%4==0){
        printf("%d is a leap year",year);
    }
    else{
        printf("%d is not a leap year",year);
    }
    return 0;
}
