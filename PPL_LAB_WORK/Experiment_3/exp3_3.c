//Convert temperature from celsius to fahrenheit and kelvin//
#include<stdio.h>
int main(){
    float temp;       //temp=>temperature//
    printf("CONVERSION OF TEMPERATURE:\nCELSIUS TO FAHRENHEIT AND CELSIUS TO KELVIN\n");
    printf("Enter the temperature in celsius:");
    scanf("%f",&temp);
    printf("Temperature in fahrenheit:%f\n",1.8*temp+32);
    printf("Temperature in celvin:%f",temp+273.15);
    return 0;
}
