#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
int main(int argc,char*argv[])
{
    int Table[9]={2,5,6,3,4,7,9,8,12};
    if(argc!=3)
    {
        cout<<argc;
        cout<<"There is an error in the Argument "<<endl;
        exit(1);
    }
    ofstream O,O1;
    O.open(argv[1]);
    if(O.fail())
    {
        cout<<"Could not open the File "<<argv[1]<<endl;
        exit(1);
    }
    O1.open(argv[2]);
      if(O1.fail())
    {
        cout<<"Could not open the File "<<argv[1]<<endl;
        exit(1);
    }
    for(int i=0;i<9;i++)
    {
        if(Table[i]%2==0)
        {
            O1<<Table[i]<<" ";
        }
        else
            {
             O1<<Table[i]<<" ";
            }
    }
        O.close();
        O1.close();

    ifstream O2;
    char c;
    for(int i=0;i<argc;i++)
    {
        O2.open(argv[i]);
        cout<<"Content of "<<argv[i]<<endl;
    do
    {
        O2.get(c);
        cout<<c;    }
    while(O);
        cout<<endl<<endl;
    O2.close();
    }
      return 0;
}


