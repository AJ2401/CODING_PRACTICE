#include<stdio.h>
struct A
{
    int x;
    int y;
};
struct A func(struct A p)
{
    p.x=p.x+25;
    p.y=p.y+10;
    return(p);
};
int  main()
{
    struct A obj={12,3};
    struct A obj1={3,98};
    obj=func(obj);
    printf("\nThe Coordinates %d %d",obj.x,obj.y);
    obj1=func(obj1);
    printf("\nThe coordinates %d %d ",obj1.x,obj1.y);
}
