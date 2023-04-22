#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{

    int N=68;
    char A[N],B[N];
    ifstream O1,O2;
    O1.open("Files");
    O2.open("files");
    for(int i=1;i<10;i++)
    {
        if(O1.eof()!=0)
        {
            cout<<"End of file"<<endl;
            exit(1);
        }
           O1.getline(A,N);
           cout<<A<<endl;

       if(O2.eof()!=0)
       {
        cout<<"End of file"<<endl;
        exit(1);
       }
           O2.getline(B,N);
           cout<<B<<endl;
    }
    return 0;
}
