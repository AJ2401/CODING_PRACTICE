#include<stdio.h>
#include<stdlib.h>
struct A
{
    char Name[25];
    int age;
};
void func(char* a[25],int* b)
{
    scanf("%s %d",&a,&b);
}
int main()
{
    printf("\nEnter the name and Age\n");
    struct A obj;
    func(&obj.Name,&obj.age);
    printf("The name and age is %s %d",obj.Name,obj.age);
    return 0;
}
