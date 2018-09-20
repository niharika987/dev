#include<stdio.h>
#include<string.h>
int main()
{
        char word[2];
        printf("Enter a keyword to check wherther it is if or not\n");
        scanf("%s",&word);
        if(!strcmp(word,"if")){
                printf("Pattern Matched 'if' Found\n");
        }
        else{
                printf("Pattern Not Matched !!\n");
        }
}






