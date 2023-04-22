#include<stdio.h>
struct A
{
  int x;
  int y;
};
struct A*func(int a,int b)
{
    struct A *ptr=(struct A*)malloc(sizeof(struct A));
    ptr->x=a+10;
    ptr->y=b+12;
    return(ptr);
};
int main()
{
    struct A *obj1,*obj2;
    obj1=func(15,23);
    obj2=func(25,61);
    printf("\nThe Coordinates are : %d %d \n",obj1->x,obj1->y);
    printf("\nThe Coordinates are : %d %d \n",obj2->x,obj2->y);
}
