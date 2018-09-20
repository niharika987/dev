#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int pattern(char *p,int n){
        char word[120];
        int i=0;
        memset(word,'\0',120);
        int k=0;
        for(i=0;i<n;i++)
        {
                if(*(p+i)!='\t')
                        word[k++]=*(p+i);
                if(!strcmp(word,"if")){
                        return 1;
                }
        }
        return 0;
}
int main()
{
        FILE *f=fopen("first.cpp","r");
        char c=fgetc(f);
        char word[20];
        int k=0;
        memset(word,'\0',20);
        while(c!=EOF)
        {
                if(c!=' ' && c!='\n' && c!='\0')
                {
                       word[k++]=c;
                }
                else
                {
                        if(pattern(word,strlen(word))){
                                printf("Pattern Matched 'if' Found  Word is : %s\n",word);
                        }
                        else{
                                printf("Pattern Not Matched !! Word is : %s\n",word);
                        }
                        memset(word,'\0',20);
                        k=0;
                }
                c=fgetc(f);
        }
}




 
