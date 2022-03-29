#include <bits/stdc++.h> 
#define ll long long  
using namespace std; 
 
 
void solve(){ 
    int x, y, n;
	cin >> x >> y >> n;
	if (n - n % x + y <= n) {
		cout << n - n % x + y << endl;
	} else {
		cout << n - n % x - (x - y) << endl;
	}
} 
 
int main(){ 
    int t; 
    cin>>t; 
    while(t--){
        solve(); 
    } 
    return 0; 
}