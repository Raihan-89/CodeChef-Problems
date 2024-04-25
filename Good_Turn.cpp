#include<iostream>
using namespace std;
int main()
{
    int i,n,x,y;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        if((x+y)>6)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}