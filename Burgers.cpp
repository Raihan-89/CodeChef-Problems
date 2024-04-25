#include<iostream>
using namespace std;
int main()
{
    int i,n,a,b;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>=b)
            cout<<b<<endl;
        else if(b>=a)
            cout<<a<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0;
}