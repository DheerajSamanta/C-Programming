/*
Design a structure 'subject' to store details of the subject(subject name,subject code,etc.)using structure pointer allocate dynamic memory to structure,and obtain details of 'n'subjects with for loop.
*/
#include<stdio.h>
#include<stdlib.h>
  struct course{
    char subject[30];
    int sub_code;
  };
  int main(){
    struct course*ptr;
    int records;
    printf("Enter the number of records:");
    scanf("%d",&records);
   ptr=(struct course*)malloc(records*sizeof(struct course));
   for(int i=0;i<records;i++){
    printf("Enter subject and marks: \n");
    scanf("%s %d",(ptr+i)->subject,&(ptr+i)->sub_code);
   }
   printf("Displaying Information: \n");
   for(int i=0;i<records;i++){
    printf("%s\t%d\n",(ptr+i)->subject,(ptr+i)->sub_code);
   }
   free(ptr);
   return 0;

  }
