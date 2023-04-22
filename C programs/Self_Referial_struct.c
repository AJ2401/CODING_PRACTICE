#include<stdio.h>
struct A
{
   char name[25];
   int age;
   struct A *ptr;
};
int main()
{
    struct A obj1;
    struct A obj2;
    obj1.name[25]="abhi";
    obj1.age=25;
    obj1.ptr=NULL;
    obj2.name[25]="hello";
    obj2.age=23;
    obj2.ptr=NULL;
    obj1.ptr=&obj2;
    printf("\nThe Element is through ptr %s %d\t",obj1.ptr->name,obj1.ptr->age);
    printf("\nThe Element is without ptr previous cell %s %d\t",obj1.name,obj1.age);
}


