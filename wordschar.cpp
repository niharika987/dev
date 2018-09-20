#include<stdio.h>
#include<conio.h>
int main()
{
char st[100];
int ch = 0, words = 0,i;
printf("\n Enter String");
gets(st);
for(i=0;st[i]!=NULL;i++)
{
ch++;
if(st[i]==' ')
{
words++;
}}
printf("\n %d Total no. of character",ch);
printf("\n %d Total no. of Words",words);

}
