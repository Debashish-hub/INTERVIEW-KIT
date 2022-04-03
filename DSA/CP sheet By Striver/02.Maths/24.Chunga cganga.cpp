#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll x,y,z;
    cin>>x>>y>>z;
    ll a = (x+y)/z;
    if(a == (x/z + y/z)){
        cout<<a<<" "<<0<<endl;
    }else{
        ll b = min( z - (x % z), z - (y % z));
        cout<<a<<" "<<b<<endl;
    }
    
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
