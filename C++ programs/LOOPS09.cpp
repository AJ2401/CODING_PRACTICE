#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<"The Pythagorean Triplets are : "<<endl;
    for(int i=2; i<=30; i++)
    {
        int a=pow(i,2);
        for(int j=2; j<=30; j++)
        {
            int b=pow(j,2);
            for(int k=2; k<=30; k++)
            {
                int c=pow(k,2);
                if(a+b==c)
                {
                    cout<<i<<" , "<<j<<" , "<<k<<endl;
                }
            }

        }
    }
}
