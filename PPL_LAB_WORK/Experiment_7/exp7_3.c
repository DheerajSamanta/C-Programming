/*Convert uppercase string to lowercase using for loop*/
#include<stdio.h>
#define N 100
 void main(){
    char sent[N];
   printf("Enter a sentence:");
   scanf("%[^\n]",&sent);
   for(int i=0;i<N;i++){
    if((int)sent[i]>=65&&(int)sent[i]<=90){
        sent[i]=sent[i]+32;
    }
    else{
        continue;
    }
printf("%s\n",sent);
   }
 }