#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, k;
	cin >> n >> k;
	map<int, int> have;
	for (int i = 0; i < n; ++i) {
		int num;
		cin >> num;
		have[num]++;
	}
	int cnt = 0;
	int ans = 0;
	for (auto p : have) {
		cnt += p.second % 2;
		ans += p.second / 2 * 2;
	}
	ans += (cnt + 1) / 2;
	cout << ans << "\n";
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
