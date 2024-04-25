#include<iostream>
using namespace std;
int main()
{
    int i,n,x,total=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        total=x*15;
        cout<<total<<endl;
    }
    return 0;
}