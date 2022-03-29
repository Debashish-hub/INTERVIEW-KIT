#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;


void solve(){
    ll x;
    cin>>x;
    ll res = 1;
    ll a = 2;
    while(x > 0){
        if(x&1)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        x >>= 1;
    }
    cout<< res;
}

int main()
{
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
