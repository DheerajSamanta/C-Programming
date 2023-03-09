// Find the roots of the quadratic equation //
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,D;
    printf("\n Roots of the quadratic equation:");
    printf("The equation must be in the form of ax^2+bx+c=0");
    printf("\n Enter the value of a:");
    scanf("%f",&a);
    printf("\n Enter the value of b:");
    scanf("%f",&b);
    printf("\n Enter the value of c:");
    scanf("%f",&c);
       D=(b*b-4*a*c);
       if(D>0){
        printf("\n The equation has two  distinct roots:");
        printf("\n The roots are %f and %f",(-b+sqrt(D))/2*a,(-b-sqrt(D))/2*a);
        }
        else if(D=0){
            printf("\n The equation has one common root:");
            printf("\n The roots is %f",-b/2*a);
        }
        else if(D<0){
            printf("\n The equation has  two imaginary roots:");
           // printf("\n The roots are %f and %f",(-b+sqrt(-1*D))/2*a,(-b-sqrt(-1*D))/2*a);//
        }
        else{
            printf("CHECK THE FORMAT OF THE EQUATION (THEN ENTER THE VALUE):");
        }

        return 0;
}