#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0; i<n; i++){
        cin>>arr[i];
    }
    ll ans = 0, temp = arr[0];
    for(ll i=1; i<n; i++){
        if(arr[i] < temp){
            ans += temp - arr[i];
        }
        temp = max(arr[i], temp);
    }
    cout<<ans;
    return 0;
}
