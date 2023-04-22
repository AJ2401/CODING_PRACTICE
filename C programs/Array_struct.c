#include<stdio.h>
struct A
{
    int x;
    int y;
};
void func(struct A p[])
{
  for(int i=0;i<3;i++)
  {
      printf("%d %d\n",p[i].x,p[i].y);
  }
}
int main()
{
    struct A obj[]={{12,15},{5,18},{22,31}};
    func(obj);
}
