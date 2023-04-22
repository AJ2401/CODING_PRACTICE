#include<iostream>
#include<cstring>
using namespace std;
class Person
{
private:
    char Name[20];
    int Age;
public:
    Person(char *S,int A)
    {
        strcpy(Name,S);
        Age=A;
    }
    Person & Person::greater(Person & x)
    {
        if(x.Age>=Age)
            return(x);
        else
            return(*this);
    }
    void Display(void)
    {
        cout<<"Name is "<<Name<<endl<<" Age is "<<Age<<endl;
    }
};
int main()
{
    Person Obj1("Abhi",18);
    Person Obj2("Rama",17);

    Person Q=Obj1.greater(Obj2);
    cout<<"The Elder Person is"<<endl;
    Q.Display();
    return 0;

}

