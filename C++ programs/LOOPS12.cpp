#include<iostream>
using namespace std;
int main()
{
 int Num,K=1;
 cout<<"Enter any Value for How Many Rows : "<<endl;
 cin>>Num;
 cout<<endl;
 for(int i=1;i<=Num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"  "<<K<<"  ";
            K++;
        }
        cout<<endl;
    }
}
