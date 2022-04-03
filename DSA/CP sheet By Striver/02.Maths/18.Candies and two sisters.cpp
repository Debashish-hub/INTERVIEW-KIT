#include <bits/stdc++.h> 
#define ll long long  
using namespace std; 
 
 
void solve(){ 
    ll n;
    cin>>n;
    if(n <= 2){
        cout<<0<<endl;
    }else{
        if(n % 2 == 0){
            cout<<n/2 - 1<<endl;
        }else{
            cout<<n/2<<endl;
        }
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