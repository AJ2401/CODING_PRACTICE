#include<iostream>
#include<cstring>
using namespace std;
class Names{
protected:
char *name;
int len;
public:
    Names()
    {
        len=0;
        name=new char[len+1];
    }
    void get(void)
    {
        char *S;
        S=new char[30];
        cout<<"Enter your name "<<endl;
        cin>>S;
        len=strlen(S);
        name=new char[len+1];
        strcpy(name,S);
    }
    void show(void)
    {
        cout<<"Name is "<<name<<endl;
    }
};
int main()
{
    Names *P[10];
    bool X;
    int n=1;
    do
    {
      P[n]=new Names;
      P[n]->get();
      n++;
      cout<<"Do you want to continue  for 1-yes and no-0"<<endl;
      cin>>X;
    }
    while(X);
    for(int i=1;i<=n;i++)
    {
        P[i]->show();
    }
    return 0;
}
