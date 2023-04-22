//Fibonnaci number
#include<iostream>
using namespace std;
void intial(int arr[],int n)
{
   for(int i=0;i<n;i++){
      arr[i]=-1;
   }
}
int fibo(int num,int arr[])
{
   if(num<=1)
   {
      return(num);
   }
   else{
      if(arr[num]!=-1){
         return(arr[num]);
      }
   }
   arr[num]=fibo(num-1,arr) + fibo(num-2,arr);
   return(arr[num]);
}
int main()
{
   int num; 
   cout<<"Enter the Number : \n";
   cin>>num;
   int arr[num+1];
   intial(arr,num+1);
   int res=fibo(num,arr);
   cout<<"Result"<<endl<<res<<endl;
   return(0);
}