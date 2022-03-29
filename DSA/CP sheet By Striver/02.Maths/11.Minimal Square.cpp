#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int a,b;
    cin>>a>>b;
    int mi = min(a,b), ma = max(a,b);
    if(a == b){
        a *= 2;
        cout<<a*a<<endl;
    }else{
        if(2*mi >= ma){
            mi *= 2;
            cout<<mi*mi<<endl;
        }else{
            cout<<ma*ma<<endl;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
