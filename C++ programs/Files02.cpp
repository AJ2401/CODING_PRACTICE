#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream O1("Files");
    O1<<"India"<<endl;
    O1<<"Maharashtra"<<endl;
    O1<<"Rajasthan"<<endl;
    O1<<"Tamil Nadu"<<endl;
    O1.close();
    ofstream O2("files");
    O2<<"Delhi"<<endl;
    O2<<"Mumbai"<<endl;
    O2<<"Jaipur"<<endl;
    O2<<"Chennai"<<endl;
    O2.close();
    int N=90;
    char A[N];
    ifstream O3("Files");
    cout<<"The Name of States are "<<endl;
    while(O3)
    {
        O3.getline(A,N);
        cout<<A;
        cout<<endl;
    }
    O3.close();
    ifstream O4("files");
    cout<<"The name of Capitals are "<<endl;
    while(O4)
    {
        O4.getline(A,N);
        cout<<A;
        cout<<endl;
    }
    O4.close();
return 0;
}
