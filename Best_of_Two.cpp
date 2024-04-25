#include<iostream>
using namespace std;
int main()
{
    int i,n,x,y;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x>=y)
            cout<<x<<endl;
        else
            cout<<y<<endl;
    }
    return 0;
}