#include <bits/stdc++.h> 
#define ll long long  
using namespace std; 
 
 
void solve(){ 
    ll arr[4];
    for(int i=0; i<4; i++){
        cin>>arr[i];
    }
    sort(arr, arr+4);
    cout<<arr[3]-arr[0]<<" "<<arr[3]-arr[1]<<" "<<arr[3]-arr[2]<<endl;
} 
 
int main(){ 
    int t =1; 
    //cin>>t; 
    while(t--){
        solve(); 
    } 
    return 0; 
}