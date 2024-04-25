#include<iostream>
using namespace std;
int main()
{
    int i,n,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x==6)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}