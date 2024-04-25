#include<iostream>
using namespace std;
int main()
{
    int i,n,x,y;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        x-=y;
        if(x>=0)
            cout<<x<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0;
}