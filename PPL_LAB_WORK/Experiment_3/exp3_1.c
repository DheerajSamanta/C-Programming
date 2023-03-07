
/* 
Obtain the required to input and compute the areas of the following shapes:
 (i)  Parallelogram(with base and height)
 (ii) Trapezoid(with height,long base,short base)
 (iii)Rhombus(with height and side)
 (iv) sphere(with radius)
 (v)  Ellipse(with major axis and minor axis)
 */
#include<stdio.h>
int main(){
    float hp,base,r,a,b,ht,hr,lbase,sbase,side;
    printf("\n Area of the Shapes:");
    printf("\n\t1.Area of Parallelogram\n\t2.Area of trapezoid\n\t3.Area of rhombus\n\t4.Area of sphere\n\t5.Area of ellipse\n");
    printf("\n Enter the height of Parallelogram:");
    scanf("%f",&hp);
    printf("\n Enter the base of the Parallelogram:");
    scanf("%f",&base);
    printf("\n Area of Parallelogram=%f",base*hp);
    printf("\nEnter the height of tarpezoid:");
    scanf("%f",&ht);
    printf("\nEnter the long base:");
    scanf("%f",&lbase);
    printf("\nEnter the short base:");
    scanf("%f",&sbase);
    printf("\n Area of trapezoid=%f",0.5*(lbase+sbase)*ht);
    printf("\n Enter the height of rhombus:");
    scanf("%f",&hr);
    printf("\nEnter the side of rhombus:");
    scanf("%f",&side);
    printf("\n Area of the rhombus=%f",hr*side);
    printf("\nEnter the radius of sphere:");
    scanf("%f",&r);
    printf("\n Area of sphere=%f",4*3.14*r*r);
    printf("\n Enter the major and minor axis of ellipse:");
    scanf("%f%f",&a,&b);
    printf("\n Area of ellipse=%f",3.14*a*b);
    return 0;
}
