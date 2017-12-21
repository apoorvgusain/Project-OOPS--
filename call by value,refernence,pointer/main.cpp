#include <iostream>

using namespace std;
int value(int x,int y){
int z;

    z=x;
    x=y;
    y=z;


    return 0;

}
int ptr( int *p ,int *q)
{
    int tmp;
    tmp=*p;
    *p=*q;
    *q=tmp;

    return 0;

}
int ref( int &a ,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    return 0;

}
int main()
{
    int r=10,s=40;
    cout << "before call by value!" << endl;
    cout<<"r"<<r<<endl<<"s"<<s<<endl;
    cout << "after call by value!" << endl;
value(r,s);
    cout<<"r"<<r<<endl<<"s"<<s;

    cout << "before call by reference!" << endl;
    cout<<"r"<<r<<endl<<"s"<<s<<endl;
    cout << "after call by reference!" << endl;
    ref(r,s);
    cout<<"r"<<r<<endl<<"s"<<s<<endl;
cout<<"******NOTE: the value of R:40 and S:10(because of reference function****\n ";
    cout << "before call by pointer!" << endl;
    cout<<"r"<<r<<endl<<"s"<<s<<endl;
    cout << "after call by pointer!" << endl;
     ptr(&r,&s);
    cout<<"r"<<r<<endl<<"s"<<s;

    return 0;
}
