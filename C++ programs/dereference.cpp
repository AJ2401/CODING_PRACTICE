#include<iostream>
using namespace std;
int main()
{ int a=12,*ptr;
 ptr=&a;
 cout<<"The value of a "<<a<<endl<<"The address of a "<<ptr<<endl;
 *ptr=(*ptr)*22;
 cout<<"The new value of a is "<<*ptr<<endl<<"The address of a is same to check "<<ptr;
 return 0;
}
