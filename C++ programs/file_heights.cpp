#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
char*filename="Binary";
int main()
{
   double height[6] ={5.325,6.4,4.974,5.9,5.112,6.56};
    ofstream O;
    O.open(filename);
    O.write((char*)&height,sizeof(height));
    O.close();
    for(int i=0;i<6;i++)
    {height[i]=0;}
    ifstream O1;
    O1.open(filename);
    O1.read((char*)&height,sizeof(height));
    for(int i=0;i<6;i++)
    {
        cout.setf(ios::showpoint);
        cout<<setw(5)<<setprecision(3)<<height[i];
    }
    O1.close();
    return 0;
}
