#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;


void solve(){
    ll n;
    cin>>n;
    int ans = 0;
    while(n > 0){
        n /= 5;
        ans += n;
    }
    cout<<ans;
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
