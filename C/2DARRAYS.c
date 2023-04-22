#include<stdio.h>
#define max 3
void create(int[max][max]);
void display(int[max][max]);
void matadd(int[max][max],int[max][max],int[max][max]);
void matmul(int[max][max],int[max][max],int[max][max]);

int main()
{
    int mat1[max][max],mat2[max][max],mat3[max][max];
    printf("\n Enter the Elements First 2D Array \n");
    create(mat1[max][max]);
    display(mat1[max][max]);
    printf("\n Enter the Elements Second 2D Array \n");
    create(mat2[max][max]);
    display(mat2[max][max]);
    printf("\n Adding \n");
    matadd(mat1[max][max],mat2[max][max],mat3[max][max]);
    display(mat3[max][max]);
    matmul(mat1[max][max],mat2[max][max],mat3[max][max]);
    display(mat3[max][max]);
}
void create(int arr[max][max])
{
  for(int i=0;i<max;i++)
  {
      for(int j=0;j<max;j++)
      {
          printf("\n Enter the Element \n");
          scanf("%d",&arr[i][j]);
      }
  }
}
void display(int arr[max][max])
{
  for(int i=0;i<max;i++)
  {
      for(int j=0;j<max;j++)
      {
          printf("%d\t",arr[i][j]);
      }
  }
}
void matadd(int arr1[max][max],int arr2[max][max],int arr3[max][max])
{
 for(int i=0;i<max;i++)
 {
     for(int j=0;j<max;j++)
     {
         arr3[i][j]=arr1[i][j]+arr2[i][j];6
     }
 }
}
void matmul(int arr1[max][max],int arr2[max][max],int arr3[max][max])
{
 for(int i=0;i<max;i++)
 {
     for(int j=0;j<max;j++)
     {
         arr3[i][j]=0;
         for(int k=0;k<max;k++)
         {
             arr3[k][j]=arr1[i][k]+arr2[k][j];
         }
     }
 }
}
