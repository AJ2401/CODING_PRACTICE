#include<iostream>
using namespace std;

int main()
{
   int num;
   cout<<"Enter the Number \n";
   cin>>num;
  // int arr[num+1];
   int prev=0;
   int pre=1;
   int cur;
   for(int i=2;i<=num;i++)
   {
      cur=pre+prev;
      prev=pre;
      pre=cur;
   }
   cout<<"The Result is : \t"<<pre<<endl;
}