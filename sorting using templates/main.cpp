#include <iostream>
using namespace std;
template<class x>
    void sorting(x p[],int n)
    { int i,j;
      x temp;
     for(i=0; i<(n-1); i++)
	{
		for(j=0; j<(n-i-1); j++)
		{
			if(p[j]>p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
    }

int main()
{    int i;
     int a[]={4,8,6,2,1,3};
  char b[]={'r','t','a','p','o'};

    sorting(a,6);
    cout<<"\nSorted Order Integers: ";
    for(int i=0;i<6;i++)
        cout<<a[i]<<"\t";
    sorting(b,5);

    cout<<"\nSorted Order Characters: ";
    for(int j=0;j<5;j++)
        cout<<b[j]<<"\t";

    return 0;
}
