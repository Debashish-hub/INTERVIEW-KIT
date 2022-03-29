#include <bits/stdc++.h> 
#define ll long long  
using namespace std; 
 
 
void solve(){ 
    int k,r;
    cin>>k>>r;
    int ans = 1;
    for(int ans = 1; ans<=9; ans++){
        if(k*ans % 10 == 0 || k*ans % 10 == r){
            cout<<ans<<endl;
            return;
        }
    }
} 
 
int main(){ 
    int t = 1; 
    //cin>>t; 
    while(t--){
        solve(); 
    } 
    return 0; 
}