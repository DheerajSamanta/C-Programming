//Print the given days in year-month-days format.Eg:396days=1year,1month,1day//
#include<stdio.h>
int main(){
    int days_in,days,month,year;    //days_in is the input from user//
    printf("TO PRINT DAYS IN YEAR/MONTHS/DAYS FORMAT:");
    printf("\n Enter the number of days:");
    scanf ("%d",&days_in);
    year=(days_in/365);
    month=(days_in-year*365)/30;
    days=(days_in-(month*30)-(year*365));
    printf("\n%d=%d year,%d month,%d days",days_in,year,month,days);
    return 0;
}