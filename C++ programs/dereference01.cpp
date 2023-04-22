#include<iostream>
using namespace std;
int main()
{ int a,*ptr;
a=12;
ptr=&a;
cout<<"value inside the pointer variable is orginally  "<<(*ptr)<<endl<<endl;
*ptr=(*ptr)/3;
cout<<"the value after dereference  "<<(*ptr)<<endl;
return 0;
}
