#include <iostream>

using namespace std;

int main(int argc,char *argv[])
{ int i;
     cout<<"Number of arguments :"<<argc<<endl;
    for(i=0;i<argc;i++)
    {
        cout<<argv[i];
    }
    return 0;
}
