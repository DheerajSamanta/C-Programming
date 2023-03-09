/* printing of pattern using nested for loop 
        11111
        22222
        33333
        44444
        55555        */
    # include<stdio.h>
    int main(){
        printf("To print the pattern:\n\t11111\n\t22222\n\t33333\n\t44444\n\t55555\n");
        for(int i=1;i<=5;i++){
            for(int j=1;j<=5;j++){
                printf("%d",i);
            }
            printf("\n");
        
        }
        return 0;
    }