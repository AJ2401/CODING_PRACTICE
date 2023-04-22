#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout.setf(ios::showpoint);
    cout<<setw(6)<<"n"<<setw(15)<<"Inverse of n"<<setw(15)<<"Sum of terms"<<endl<<endl;
    double Term,Sum=0;
    for(int i=1;i<15;i++)
    {
        Term=1.0/float(i);
        Sum=Sum+Term;
    cout<<setw(6)<<i<<setw(15)<<setiosflags(ios::scientific)<<Term<<setw(15)<<resetiosflags(ios::scientific)<<Sum<<endl;
}
return 0;
}
