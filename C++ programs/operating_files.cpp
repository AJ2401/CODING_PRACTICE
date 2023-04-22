#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class A
{
    char Name[10];
    int Code;
    double Cost;
public:
    void readFunc(void);
    void writefunc(void);
};
void A::readFunc(void)
{

    cout<<"\nEnter your Name\n";
    cin>>Name;
    cout<<"Enter the Code of the Stock\n";
    cin>>Code;
    cout<<"Enter the Cost of the Stock\n";
    cin>>Cost;
    cout<<"\n";
}
void A::writefunc(void)
{
    cout<<setw(10)<<Name<<setw(10)<<Code<<setw(10)<<setprecision(2)<<Cost<<endl;
}
int main()
{ fstream O;
  A obj;
  O.open("Stocks",ios::ate|ios::in|ios::out|ios::binary);
 O.seekg(0,ios::beg);
 cout<<"Details of the Stocks"<<endl;
 while(O.read((char*)&obj,sizeof obj))
       {
           obj.writefunc();
       }
       O.clear();

//Adding a New Record
cout<<"Adding new Item "<<endl;
obj.readFunc();
char c;
 cin.get(c);
 O.write((char*) &obj,sizeof obj);
 //Dispalying the appneded file
 O.seekg(0);
 cout<<"Modified details of stock are"<<endl;
 while(O.read((char*) &obj,sizeof obj))
 {
     obj.writefunc();
 }
 //Finding the Number of Objects in the file
 int a;
a=O.tellp();
int N;
N=a/sizeof(obj);
cout<<"The number of objects are "<<N<<endl;
cout<<"The Size of File is "<<a;

//Details are going to be Modified
int n;
cout<<"Enter the Object Number to be Modified"<<endl;
cin>>n;
cin.get(c);
int Loc =(n-1)*sizeof(obj);
if(O.eof())
{
    O.clear();

}
O.seekp(Loc);
cout<<"Enter the New values of the Object"<<endl;
obj.readFunc();
cin.get(c);
O.write((char*)&obj,sizeof obj);
cout<<flush;
//Last but not the least Show
O.seekg(0);
cout<<"Modified File is"<<endl;
while(O.read((char*)&obj,sizeof obj))
      {
          obj.writefunc();
      }
      O.close();
return 0;
}
