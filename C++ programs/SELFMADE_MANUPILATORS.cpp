#include<iostream>
#include<iomanip>
using namespace std;
ostream &currency(ostream & output)
{
   output<<" Rs ";
   return output;
}
ostream &form(ostream & output)
{
    output.setf(ios::showpos);
    output.setf(ios::showpoint);
    output.fill('#');
    output.precision(6);
    output<<setiosflags(ios::fixed)<<setw(18);//floating point ko set jarna hai eskeliye ios::fixed use kiya hai
    return output;
}
int main()
{
    cout<<currency<<form<<79961.5978;
    return 0;

}
