#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int x,y;
    cin>>x>>y;
    int p = x*y;
    if(p % 2 == 0){
        cout<<p/2<<endl;
    }else{
        cout<<p/2 + 1<<endl;
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
