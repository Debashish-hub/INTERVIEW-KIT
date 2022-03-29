#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
        int n;
		cin >> n;
		int sum = 0;
		bool odd = false, even = false;
		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			sum += x;
			odd |= x % 2 != 0;
			even |= x % 2 == 0;
		}
		if (sum % 2 != 0 || (odd && even)) cout << "YES" << endl;
		else cout << "NO" << endl;
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
