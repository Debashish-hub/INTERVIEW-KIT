#include <bits/stdc++.h> 
#define ll long long  
using namespace std; 
 
 
void solve(){ 
    ll a,b;
    cin>>a>>b;
    ll diff = abs(a-b);
    int ans = diff / 10;
    if(diff % 10 == 0){
        cout<<ans<<endl;
    }else{
        cout<<ans+1<<endl;
    }
    
} 
 
int main(){ 
    int t ; 
    cin>>t; 
    while(t--){
        solve(); 
    } 
    return 0; 
}