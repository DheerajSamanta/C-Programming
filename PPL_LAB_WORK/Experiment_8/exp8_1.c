
/*Find the sum of rows and columns of matrix of given order*/
#include<stdio.h>

void main(){
    static int array[10][10];
    int i,j,m,n,sum=0;
      printf("Enter the order of the matrix \n");
      scanf("%d %d",&m,&n);
      printf("Enter the co-efficients of the matrix \n");
      for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            scanf("%d",&array[i][j]);
        }
      }
      for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            sum=sum+array[i][j];
        }
      }
      printf("sum of the %d row is %d \n",i,sum);
      sum=0;


for(j=0;j<n;++j){
    for(i=0;i<m;++i){
        sum=sum+array[i][j];
    }
    printf("sum of the %d column is %d \n",j,sum);
    sum=0;
}
}
