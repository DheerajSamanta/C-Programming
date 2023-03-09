/*
Design a union 'product' to store the details of the product purshased like product name,price per unit,number of quantities purshased, and amount spent.
Get the name,price per unit and number of quantities of product purshased.calculate the amount spent on the product and then display all the details of the produced product using union pointers.
*/
#include<stdio.h>
 union Product{
    char product_name[30];
    double price_per_unit;
    int number_of_quantities;
    double amount_spent;
}product;
int main(){
    
    printf("Enter product name:");
    scanf("%s",product.product_name);
    printf("Enter price per unit:");
    scanf("%lf",&product.price_per_unit);
    printf("Enter number of quantities:");
    scanf("%d",&product.number_of_quantities);
    product.amount_spent=product.price_per_unit*product.number_of_quantities;
    printf("\n Product name:%s \n price per unit:%lf \n number of quantities:%d \n amount spent:%lf",product.product_name,product.number_of_quantities,product.number_of_quantities,product.amount_spent );
   return 0;
}