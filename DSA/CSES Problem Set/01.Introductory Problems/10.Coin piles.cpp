#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;


void solve(){
    ll a,b;
    cin>>a>>b;
    string ans = ((a+b)%3 != 0 || a > 2*b || b > 2*a) ? "NO" : "YES";
    cout<<ans<<endl;
}

int main()
{
    int t ;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
