#include <iostream>

using namespace std;

int main()
{ int n,a[10],flag=1,low,searchNo,high,mid;
    cout << "enter Size:";
    cin>>n;
    cout<<"enter the numbers";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout << "enter no to search:";
    cin>>searchNo;

    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(searchNo<a[mid])
        {
            high=mid-1;

        }
        else{
        if(searchNo>a[mid])
        {
            low=mid+1;
        }
            else
            {
                flag=0;
                cout<<"number found its postion is :"<<mid+1;
                break;
            }
        }
    }
    if(flag){
        cout<<"not found";
    }
    return 0;
}
