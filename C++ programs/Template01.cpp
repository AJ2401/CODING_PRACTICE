#include<iostream>
#include<vector>
using namespace std;
const int Size=4;
template<class T>
class Vector
{
    T* a;
public:
    Vector()
    {
        a=new T[Size];
        for(int i=0; i<Size; i++)
        {
            a[i]=0;
        }
    }
    Vector(T* b)
    {
        for(int i=0; i<Size; i++)
        {
            a[i]=b[i];
        }
    }
    T* Operator(Vector &Y)
    {
        T* Sum=0;
        for(int i=0; i<Size; i++)
        {
            Sum+= this->a[i] *Y.a[i];
        }
        return (Sum);
    }
};
int main()
{
    int A[4]= {2,6,3,8};
    int B[4]= {1,4,5,7};
    Vector<int>X;
    Vector<int>Y;
    X=A;
    Y=B;
    cout<<"The Value of R is = "<<X*Y<<endl;
    return 0;
}
