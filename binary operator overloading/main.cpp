#include <iostream>

using namespace std;
class overloading{
int a ;
public:
void getval(int p)
{
    a=p;

}
 overloading operator +( overloading const &ovr){
    overloading obj;
    obj.a=a+ovr.a;
    return obj;
 }

 overloading operator -( overloading const &ovr){
    overloading obj;
    obj.a=a-ovr.a;
    return obj;
 }
 overloading operator *( overloading const &ovr){
    overloading obj;
    obj.a=a*ovr.a;
    return obj;
 }
 void show()
 {
  cout<<"value is :"<<a;
 }

 };
int main()
{ overloading x,y,z;
x.getval(5);
y.getval(5);
z=x+y;
z.show();
cout<<endl;
z=x-y;
z.show();
cout<<endl;
z=x*y;
z.show();

return 0;
}
