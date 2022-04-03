#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll K,X;
    cin >> K >> X;
    cout << 9 * (K - 1) + X << '\n';
}

int main()
{
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
