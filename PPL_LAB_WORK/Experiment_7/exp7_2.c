/*Create an array ‘a1’ with ‘n’ elements. Insert an element in ith position of ‘a1’ and also delete an elementfrom jth position of ‘a1’.*/

#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
	int n, i, j, insert_element, delete_element; 
	printf("Enter the size of the array : "); 
	scanf("%d", &n); 
	int a1[n]; 
 
	printf("\nInput %d elements in the array : \n", n); 
	for (i = 0; i < n; i++) 
	{ 
		printf("element - %d : ", i); 
		scanf("%d", &a1[i]); 
	} 
 
	printf("\nInput the position to insert the element : "); 
	scanf("%d", &i); 
 
	printf("Input the element to be inserted : "); 
	scanf("%d", & insert_element); 
	
	n = n + 1; 
 
	for (j = n; j >= i; j--) 
		a1[j] = a1[j - 1]; 
      a1[i - 1] = insert_element; 

	printf("\nInput the position to delete the element : "); 
	scanf("%d", &j); 
    delete_element = a1[j - 1]; 
     n = n - 1; 
	for (i = j - 1; i < n; i++) 
		a1[i] = a1[i + 1]; 

	printf("\nThe resultant array is : "); 
	for (i = 0; i < n; i++) 
		printf("%d\t", a1[i]); 

	printf("\nElement %d is deleted from the array.\n", delete_element); 

	return 0; 
}