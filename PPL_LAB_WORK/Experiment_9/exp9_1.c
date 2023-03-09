/*Design a structure product to store the details of the product purshased like product name, price per unit, number of the quantites purshased,and amount spent.Get the names,price per unit and number of quantites of the product purshased.calculate the amount spent on the product and then display all the details of the purshased product using structure pointer.*/
#include<stdio.h>
     struct item
     {
        char itemName[30];
        int qty;
        float price;
        float amount;
     };
     void readItem(struct item*i) {
       printf("Enter the product name:");
       gets(i->itemName);
       printf("Enter price:");
       scanf("%f",&i->price);
       printf("Enter the Quantity:");
       scanf("%d",&i->qty);
       i->amount=(float)i->qty*i->price;
     }
     void printItem(struct item*i)
     {
        printf("\n Name:%s",i->itemName);
        printf("\n Price:%f",i->price);
        printf("\n Quantity:%f",i->qty);
        printf("\n Total Amount:%f",i->amount);
     }
     int main(){
        struct item itm;
        struct item*pItem;
        pItem=&itm;
        readItem(pItem);
        printItem(pItem);
        return 0;
     }
     

     
     
