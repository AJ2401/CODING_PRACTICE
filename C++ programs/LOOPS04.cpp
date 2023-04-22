#include<iostream>
using namespace std;
int Func1(int m[])
{
    for(int i=1;i<25;i++)
{
    if (m[i]>m[i-1])
    {
        return(m[i]);
    }
    else
        {
            return(m[i-1]);
        }
}
}
int Func2(int m[])
{
    for(int i=1;i<25;i++)
{
    if (m[i]<m[i-1])
    {
        return(m[i]);
    }
    else
        {
            return(m[i-1]);
        }
}
}
int main()
{
    int Num[55],a,b,Range;

    cout<<"Enter the Numbers : "<<endl;
    for(int j=0;j<25;j++)
    {
        cin>>Num[j];
    int Func1(Num[j]);
    int Func2(Num[j]);

    }
  Range=int Func1()- int Func2();
 cout<<"The Range is : "<<Range;

}

