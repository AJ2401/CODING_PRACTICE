#include<stdio.h>
#include<stdlib.h>
void multi_mat(int n,int arr1[n][n],int arr2[n][n])
{
    int arr3[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<n; k++)
            {
                arr3[k][j]=(arr1[i][k]) * (arr2[k][j]);
            }
        }
    }
    printf("The Resultant Matrix is : ");
    display(n,arr3);
}
void display(int n,int arr[n][n])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d, ",arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the Number of Elements in the Matrix");
    scanf("%d",&n);
    int arr1[n][n],arr2[n][n];
    printf("Enter the Elements of Array 1");
    arr1[n][n]=(int)calloc(n+1,sizeof(int));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("The Array 1 is : ");
    display(n,arr1);
    printf("\n Enter the Elements of Array 2");
    arr2[n][n]=(int)calloc(n+1,sizeof(int));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("The Array 2 is :");
    display(n,arr2);
    multi_mat(n,arr1,arr2);
}
