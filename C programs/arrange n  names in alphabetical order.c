#include<stdio.h>
#include<string.h>
int main()
{
    char a[10][10],temp[10];
    int n,i,j;
    printf("\nenter how many names:");
    scanf("%d',&n");
    printf("\nenter the names:");
    fflush(stdin);
   for(i=0;i<n;i++);
    gets(a[i]);

for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++){

if(strcmp(a(i),a(j),>0);{
           strcpy(temp,a(i));
           strcpy(temp,a[j]);
           strcpy(a[i],a[j]);
           strcpy(a[j],temp);
           }}
printf("\n the sorted array is :\n");
for(i=0;i<n;i++){
    puts(a(i));
}}

