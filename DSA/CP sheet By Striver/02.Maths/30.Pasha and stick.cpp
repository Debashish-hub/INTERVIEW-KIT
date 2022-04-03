#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n; 
    if(n % 2 == 1){
        cout<<0;
        return ;
    }
    int a = n/2, ans = 0;

    if(a % 2 == 0)  ans = a/2 - 1;
    else    ans = a/2;
    cout<<ans;
    
}


int main()
{
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
