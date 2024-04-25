#include<iostream>
using namespace std;
int main()
{
    int i,n,x,t;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>t;
        if(x>t)
        {
            x-=t;
            cout<<x<<endl;
        }
        else
            cout<<"0"<<endl;
    }
    return 0;
}