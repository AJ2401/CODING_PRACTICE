#include<iostream>
using namespace std;
template<class T1,class T2>
class vector
{
    T1 a;
    T2 b;
    public :
    vector(T1 A,T2 B)
    {
        a=A;
        b=B;
    }
    void show()
    {
        cout<<a<<" ";
        cout<<b<<" "<<endl;
    }
};
int main()
{
    vector<float,int> O(12.3,3);
    vector<int,char> O1(8,'c');
     O.show();
     O1.show();
return 0;
}
