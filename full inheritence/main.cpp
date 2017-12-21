#include <iostream>
using namespace std;
class base{
int a ;
protected:
int incre()
{   a=5;

    return (++a);
}
public:
    int sqr(){
    return a*a;
    }
};
class childa: public base{
int b;
public:
    void getval(){
    b=incre();
    }
    void disp(){
    cout<<"the value of B is same as base class A:"<<b<<endl;
    } };

    class childb:protected base
    {
    int c;
    public:
     void getval(){
    c=incre();
    }
    void disp(){
    cout<<"the value of C is same as base class A:"<<c<<endl;
    }
    };

 class childc:private base
    {
    int d;
    public:
     void getval(){
     incre();
    d=sqr();
    }
    void disp(){
    cout<<"the value of D is square as base class A:"<<d<<endl;
    }
    };


int main()
{  childa ca;
childb cb;
childc cc;
ca.getval();
ca.disp();
cb.getval();
cb.disp();
cc.getval();
cc.disp();

}
