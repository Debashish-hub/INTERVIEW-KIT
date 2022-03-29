#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll x,y;
    cin>>x>>y;
    ll l = max(x, y) - 1;
    if(l&1){
        if(x < y)   
            cout<< l*l + x<<endl;
        else        
            cout<< l*l+2*l-y+2<<endl;
    } else {
        if(x < y)   
            cout<< l*l+2*l-x+2<<endl;
        else        
            cout<< l*l + y<<endl;
    }
}

int main()
{
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
