#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n,x;
    cin>>n>>x;
    int ans = 1, count = 2;
    if(n <= 2){
        ans = 1;
    }else{
        while(count < n){
            count += x;
            ans++;
        }
    }
    cout<<ans<<endl;
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
