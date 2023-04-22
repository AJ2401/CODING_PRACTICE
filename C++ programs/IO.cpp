#include<iostream>
using namespace std;
int main()
{
    int count=0;
    char C;
    cout<<"Input text\n";
    cin.get(C);
    while(C!='\n')
    {
        cout.put(C);
        count++;
        cin.get(C);
    }
    cout<<"\nThe number of characters = "<<count<<endl;
    return 0;
}
