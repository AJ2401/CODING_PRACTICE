#include<iostream>
using namespace std;
int main()
{
    int nums[10],n;
    cout<<"Size of the Array ?"<<endl;
    cin>>n;
    cout<<"Enter the Elements of the Array"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }N
    int *ptr;
    ptr=nums;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(*ptr%2==0)
        {
            sum=sum+*ptr;
            ptr++;
        }
    }
    cout<<"The sum of Even numbers present in are ="<<sum<<endl;
}
