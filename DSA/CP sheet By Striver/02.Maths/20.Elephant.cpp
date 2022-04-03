#include <bits/stdc++.h> 
#define ll long long  
using namespace std; 
 
 
void solve(){ 
    ll n;
    cin>>n;
    ll ans = 0;
    while(n > 0){
        if(n >= 5){
            ans += (n / 5);
            n = n%5;
        }else if(n >= 4){
            ans += (n / 4);
            n = n%4;
        }else if(n >= 3){
            ans += (n / 3);
            n = n%3;
        }else if(n >= 2){
            ans += (n / 2);
            n = n%2;
        }else if(n >= 1){
            ans += (n / 1);
            n = n%1;
        }
    }
    cout<<ans<<endl;
} 
 
int main(){ 
    int t =1; 
    //cin>>t; 
    while(t--){
        solve(); 
    } 
    return 0; 
}