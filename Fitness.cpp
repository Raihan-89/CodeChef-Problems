#include<iostream>
using namespace std;
int main()
{
    int i,n,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        x+=x;
        x*=5;
        cout<<x<<endl;
    }
    return 0;
}