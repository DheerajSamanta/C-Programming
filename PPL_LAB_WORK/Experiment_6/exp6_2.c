
/*
Function main() gets two numbers from the user and calls three functions in the given order:
a. “int triangle_area(int base, int height)” returns the area of the right-angled triangle to main().
b. “void swap(int *, int*)” swaps the two numbers using bitwise operator and displays them.
c. “float remainder (int a, int b)” returns the remainder of a/b to main().
*/

#include<stdio.h>

// Function 1
int triangle_area(int base, int height)
{
	return (base * height) / 2; 
}

// Function 2
void swap(int *x, int *y) 
{
    int temp = *x; 
    *x = *y; 
    *y = temp; 
    printf("After swapping x = %d and y = %d \n", *x, *y); 
}

// Function 3
float* remainder(int a, int b)
{
	static float rem;
	rem = a % b;
	return &rem;
}

// Main Function
int main()
{
	int x, y;
	printf("Enter two numbers:\n");
	scanf("%d%d", &x, &y);
	printf("The area of the triangle = %d \n", triangle_area(x, y));
	swap(&x, &y);
	float *rem;
	rem = remainder(x, y);
	printf("Remainder of %d/%d is %.2f \n", x, y, *rem);
	return 0;
}