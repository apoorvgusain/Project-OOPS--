#include <iostream>
#include<stdlib.h>
using namespace std;
class base {
public:
    int a;
    };
    class d1:virtual public base
    {
public:
    int b;
    };
    class d2:virtual public base
    {
    public:
        int c;

    };
    class d3:public d1,public d2
    {

    public:
        int total=50;

    };
int main()
{
    system("cls");
    d3 ob;
    ob.a=23;
    ob.b=53;
    ob.c=13;
    ob.total=ob.a+ob.b+ob.c;
    cout<<"A:"<<ob.a<<endl;
    cout<<"B:"<<ob.b<<endl;
    cout<<"C:"<<ob.c<<endl;
    cout<<"total:"<<ob.total;
    return 0;
}
