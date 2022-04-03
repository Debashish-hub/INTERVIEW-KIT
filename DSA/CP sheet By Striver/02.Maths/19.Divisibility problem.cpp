#include <bits/stdc++.h> 
#define ll long long  
using namespace std; 
 
 
void solve(){ 
    ll a,b;
    cin>>a>>b;
    ll per = a % b;
    if(per != 0){
        cout<<abs(per - b)<<endl;
    }else{
        cout<<per<<endl;
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