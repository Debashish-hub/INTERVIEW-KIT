#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n , x; 
	cin>>n;
	ll arr[n];
	for(ll i=0; i<n; i++){
	    cin>>arr[i];
	    x = arr[i] % 14 ;
    	if( arr[i] > 14 && x > 0 && x < 7 )
    		cout<<"YES"<<endl ;
    	else
    		cout<<"NO"<<endl;
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
