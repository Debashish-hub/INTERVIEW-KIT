#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll m,n,a;
    cin>>m>>n>>a;
    cout<<((m+a-1)/a)*((n+a-1)/a)<<endl;
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
