#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    string str;
    cin>>str;
    ll ans = 0ll;
    int flag = 1;
    for(int i=1;i<str.size();++i){
        if(str[i]!='0'){
            flag=0;
        }
    }
    int len = str.size();
    if(flag){
        len--;
    }
    ans = (len+1)/2;
    cout<<ans<<endl;
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
