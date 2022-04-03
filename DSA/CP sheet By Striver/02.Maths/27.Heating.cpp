#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int c,sum;
    cin>>c>>sum;
    int d = sum / c;
	int rem = sum % c;
	cout << rem * (d + 1) * (d + 1) + (c - rem) * d * d << endl;
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
