#include<iostream>
#include<string.h>
#include<conio.h>
#include<ctype.h>
using namespace std;
int main()
{
    char *lesiure[10]=
    {
        "Books",
        "Movies",
        "Tv",
        "Songs",
        "FM",
    };
    char str[20];
    cout<<"Type the activity you prefer to do in ur leisure "<<endl;
    cin>>str;
    for(int i=0; i<5; i++)
    {
        if (!char strcmp(const str,const *lesiure[i]))
        {
            cout<<"your Activity "<<str<<" is there"<<endl;
            break;
        }

    if(i==5)
    {
        cout<<"your Activity "<<str<<" is not there"<<endl;
    }
    }

    //getch();
    return 0;
}
