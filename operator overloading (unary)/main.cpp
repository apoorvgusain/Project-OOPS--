#include <iostream>

using namespace std;
class overloading{
int a ;
public:
void getval(int a)
{
    this->a=a;
}
 overloading operator ++(){
    overloading obj;
    obj.a=++a;
    return obj;
 }

 overloading operator ++(int)
 {
    overloading obj;
    obj.a=a++;
    return obj;
 }

 overloading operator --()
 {
    overloading obj;
    obj.a=a--;
    return obj;
 }

 overloading operator --(int)
 {
    overloading obj;
    obj.a=a--;
    return obj;
 }

 void show()
 {
  cout<<"value is :"<<a;
 }

 };
int main()
{ overloading x,y;
x.getval(5);

cout<<"Increment"<<endl;
y=++x;
x.show();
cout<<endl;
y.show();
y=x++;
cout<<endl;
x.show();
cout<<endl;
y.show();
cout<<"\n Decrement"<<endl;
y=--x;
x.show();
cout<<endl;
y.show();
y=x--;
cout<<endl;
x.show();
cout<<endl;
y.show();
return 0;
}

