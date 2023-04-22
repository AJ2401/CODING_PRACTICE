//Count number if ways to reach nth stairs
#include<iostream>
using namespace std;

int func(int num)
{
   if(num==0 || num==1)
   {
      return(1);
   }
   else{
      int l=func(num-1);
      int r=func(num-2);
      return(l+r);
   }
}
int main()
{
   int num;
   cout<<"Enter the Number : \n";
   cin>>num;
   int res=func(num);
   cout<<"The Result : "<<res<<endl;
   return 0;
}