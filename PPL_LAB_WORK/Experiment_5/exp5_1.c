/*given positive number 'n' ,generate all the armstrong numbers between 1 and n
*/  
#include <stdio.h> 
int order(int num) 
{ 
int n = 0; 
    while (num != 0) { 
        n++; 
        num = num / 10; 
    } 
    return n; 
} 
int power(int num, int n) 
{ 
    int p = 1; 
    for (int i = 0; i < n; i++) 
        p = p * num; 
  
    return p; 
}void checkArmstrong(int num) 
{ 
    int n = order(num); 
    int temp = num, sum = 0; 
  
    while (temp != 0) { 
        int r = temp % 10; 
        sum = sum + power(r, n); 
        temp = temp / 10; 
    } 
  
    if (sum == num) 
        printf("%d ", num); 
} void generateArmstrong(int n) 
{ 
    printf("Armstrong numbers between 1 and %d: \n", n); 
    for (int i = 1; i <= n; i++) 
        checkArmstrong(i); 
} 
int main() 
{ 
    int n;
    printf("Enter the number till which you want to generate Armstrong numbers: \n");
    scanf("%d", &n);
    generateArmstrong(n); 
    return 0; 
}
