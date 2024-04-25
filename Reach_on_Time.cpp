#include<iostream>
using namespace std;
int main()
{
    int i,x,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x>=30)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}