#include<bits/stdc++.h>
using namespace std;
#define Bismillah ios_base::sync_with_stdio(false); cin.tie(0);
int main(){
    Bismillah
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int c = 0, x = 1;
        while(x <= n){
            n -= x;
            c++;
            x++;
        }
        cout << c << endl;
    }
}