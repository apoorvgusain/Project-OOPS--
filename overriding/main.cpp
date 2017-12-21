#include <iostream>
using namespace std;
 class a{
 int num;
 public:
     a()
     {
     num=10;
cout<<" BASE class Num value is :"<<num<<endl;
     }
     virtual void incre()
     {
         num+=1;
         cout<<"NUM = "<<num<<endl;

      }
     };
     class b:public a{
     int num;
 public:
    b()
    {
    num=5;
    cout<<" DERIVED Class Num value is : "<<num<<endl;
    }
      void incre(){
          cout<<"INCREMENT"<<endl;
     num++;
      cout<<"NUM = "<<num<<endl;
      }
       };
int main()
{ a *p;
  b obj;
  p=&obj;
  p->incre();

    return 0;
}
