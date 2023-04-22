#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
    int a[]={12,10,5,6,13,1};
    float b[]={1.2,5.3,4.6,8.2,6.1};
    sort(a,a+6,greater<int>());
    sort(b,b+5);
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
   int z[11];
   merge(a,a+6,b,b+5,z);
   for(int i=0;i<11;i++)
   {
       cout<<z[i]<<" ";
   }
   cout<<endl;
}
