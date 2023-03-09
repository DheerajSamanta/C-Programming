// check if a given character is a vowel or consonant using switch-case statements//
#include<stdio.h>
int main(){
char ch;
printf("To understand which alphabet is consonant or vowel:) \n");
printf("Enter the alphabet:");
scanf("%c",&ch);
switch(ch){
    case'a':
    case'A':printf("Entered alphabet is vowels:)\n");
    break;
    case'e':
    case'E':printf("Entered alphabet is vowels:)\n");
    break;
    case'i':
    case'I':printf("Entered alphabet is vowels:)\n");
    break;
    case'o':
    case'O':printf("Entered alphabet is vowels:)\n");
    break;
    case'u':
    case'U':printf("Entered alphabet is vowels:)\n");
    break;
    default:printf("you have entered a consonant:)\n");
}
return 0;

}