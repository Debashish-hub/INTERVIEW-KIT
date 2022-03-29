#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll a[3], n;
    cin >> a[0] >> a[1] >> a[2] >> n;
    sort(a, a + 3);
    n -= 2 * a[2] - a[1] - a[0];
    if(n < 0 || n % 3 != 0) {
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
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
