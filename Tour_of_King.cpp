#include<iostream>
using namespace std;
int main()
{
    int i,n,x,y;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        x*=5;
        y*=7;
        cout<<x+y<<endl;
    }
    return 0;
}