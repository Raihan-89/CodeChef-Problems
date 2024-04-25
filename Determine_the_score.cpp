#include<iostream>
using namespace std;
int main()
{
    int i,n,x,y;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        x/=10;
        x*=y;
        cout<<x<<endl;
    }
    return 0;
}