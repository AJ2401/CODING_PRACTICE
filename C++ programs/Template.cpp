#include<iostream>
using namespace std;
const int Size=4;
template<class N>
class vector
{
    N* a;
public:
    vector()
    {
        a=new N[Size];
        for(int i=0; i<Size; i++)
        {
            a[i]=0;
        }
    }
    vector(N* b)
    {
        for(int i=0; i<Size; i++)
        {
            a[i]=b[i];
        }
    }
    N* Operator(vector &Y)
    {
        N* Sum=0;
        for(int i=0; i<Size; i++)
        {
            Sum+= this->a[i] *Y.a[i];
        }
        return (Sum);
    }
};
int main()
{
    float A[4]= {2.1,2.0,5.5,3.4};
    float B[4]= {1.3,4.6,1.9,2.7};
    vector<float> X;
    vector<float> Y;
    X=A;
    Y=B;
   float R=X * Y;
    cout<<"The Value of R is = "<<R<<endl;
    return 0;
}
