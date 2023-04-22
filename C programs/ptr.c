#include<stdio.h>
struct A
{
    char name[25];
    int age;
};
void func(struct A obj1)
{
    printf("The Name is %s and the Age is %d ",obj1.name,obj1.age);
}
int main()
{
    struct A obj ={"john",18};
    func(obj);
    return 0;
}
