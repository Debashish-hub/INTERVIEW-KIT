#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    for(int k = 1; k <= n; k++){
        ll count = 1LL + (k-1)*(k-2)/2;
        count = count * (k-1) * (k+4);
        cout<<count<<endl;
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
