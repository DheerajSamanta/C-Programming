
/* sum of all array elements using recursion */
#include<stdio.h>
int sum(int arr[],int n);
void main(){


  int n;
  printf("How many numbers you want to enter?");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    printf("Enter %d number:",i+1);
    scanf("%d",&arr[i]);

  }
  printf("arr={");
  for(int j=0;j<n;j++){
    printf("%d",arr[j]);

  }
  printf("}");
  printf("\n Sum of the elements=%d",sum(arr,n));
}

int sum(int arr[],int n){
  int summa=0;
  static int k=0;
  if(k>=n){
    return 0;
  }
  summa=arr[k];
  k++;
  return summa=summa+sum(arr,n);
}

