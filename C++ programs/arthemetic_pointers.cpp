#include<iostream>
using namespace std;
int main()
{
int a[]={21,45,78,98,12,35,74,15,46,79,10,23};
cout<<"the Array elements are"<<endl;
for(int i=0;i<12;i++)
{
    cout<<a[i]<<"  ";
}
int *ptr;
ptr=&a[2];
ptr++;
 cout<<"\n value of ptr ++ "<<(*ptr)<<endl;
 ptr--;
 cout<<"value of ptr -- "<<(*ptr)<<endl;
 ptr+=5;
 cout<<"value of ptr +5 "<<(*ptr)<<endl;
 ptr+=1;
 cout<<"value of ptr +1 "<<(*ptr)<<endl;
 return 0;
 }
