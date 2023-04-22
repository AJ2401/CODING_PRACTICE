#include<stdio.h>
#include<stdlib.h>
#define max 30
int m,n;
void Table(char*pat,int table[])
{
    for(int i=0;i<30;i++)
    {
        table[i]=m;
    }
    for(int i=0;i<m-1;i++)
    {
        table[pat[i]]=m-i-1;
    }
}
int Horspool(char*text,char*pat,int table[]){
    int i=m-1;
    while(i<=n-1)
    {
        int k=0;
        while(k<=m-1 && pat[m-1-k]==text[i-k])
        {
            k++;
        }
            if(k==m)
            {
                return(i-m+1);
            }
            else
            {
                i=i+table[text[i]];
            }
    }
    return(-1);
}
void main()
{
    int table[max];
    char*pat,*text;
    printf("Enter the Text : \n");
    scanf("%s",&text);
    printf("Enter the pattern :\n");
    scanf("%s",&pat);
    m=strlen(pat);
    n=strlen(text);
    printf("The Text is %s of Length %d : \n",text,n);
    printf("The Pat is %s of Length %d  : \n",pat,m);
    Table(pat,table);
    int res=Horspool(text,pat,table);
    if(res>-1)
    {
        printf("Present at POS %d ",res+1);
    }
    else
    {
        printf("Not Found \n");
    }
}
