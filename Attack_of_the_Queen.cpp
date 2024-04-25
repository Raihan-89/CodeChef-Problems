#include<bits/stdc++.h>
using namespace std;
#define Bismillah ios_base::sync_with_stdio(false); cin.tie(0);
int main(){
    Bismillah
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        int h = 2 * (n - 1);
        int d = 0;
        d += min(x - 1, y - 1);
        d += min(x - 1, n - y);
        d += min(n - x, y - 1);
        d += min(n - x, n - y);
        cout << h + d << endl;
    }
}