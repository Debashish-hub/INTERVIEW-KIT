#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll arr[3];
    for(int i=0; i<3; i++){
        cin>>arr[i];
    }
    sort(arr, arr+3);
    if(arr[1] != arr[2]){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        cout<<arr[0]<<" "<<arr[0]<<" "<<arr[2]<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
