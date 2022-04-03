#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    ll arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    cout << m / (k + 1) * (arr[n-1] * 1ll * k + arr[n-2]) + m % (k + 1) * arr[n-1] << endl;
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
