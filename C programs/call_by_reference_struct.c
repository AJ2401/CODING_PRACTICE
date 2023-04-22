#include<stdio.h>
struct A
{
    char Name[35];
    int age;
};
void func(struct A *obj3)
{
   printf("\nName is %s and the Age is %d",obj3->Name,obj3->age);
}
int main()
{
    struct A obj={"tiger",21};
    struct A obj2={"lion",12};
    func(&obj);
    func(&obj2);
}
