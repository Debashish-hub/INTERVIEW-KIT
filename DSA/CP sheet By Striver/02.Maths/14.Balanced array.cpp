#include <bits/stdc++.h> 
#define ll long long  
using namespace std; 
 
 
void solve(){ 
    int n;
	cin >> n;
	n /= 2;
	if (n & 1) {
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
	for (int i = 1; i <= n; ++i) {
		cout << i * 2 << " ";
	}
	for (int i = 1; i < n; ++i) {
		cout << i * 2 - 1 << " ";
	}
	cout << 3 * n - 1 << endl;
} 
 
int main(){ 
    int t; 
    cin>>t; 
    while(t--){
        solve(); 
    } 
    return 0; 
}