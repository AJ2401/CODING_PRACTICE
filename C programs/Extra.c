
#include <stdio.h>
#include<stdlib.h>
int main() {
   int n,m;
   printf("Enter the n :");
   scanf("%d",&n);
    int *ptr=(int*)malloc(n*sizeof(int));
    printf("\nEnter elements :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
     //   printf("\n");
    }
    printf("Before :");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",*(ptr+i));
    }
    printf("The numbers to be added :");
    scanf("%d",&m);
 *ptr=(int*)realloc(ptr,(n+m)*sizeof(int));
 int a=m+n;
 printf("Enter New elements :");
 for(int i=n;i<m+n;i++)
 {
    scanf("%d",ptr+i);
 }
 printf("Ater Adding :");
 for(int i=0;i<a;i++)
 {
     printf(" %d ",*(ptr+i));
 }
    return 0;
}
