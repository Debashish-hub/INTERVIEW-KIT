#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, sum1 = 0, sum2 = 0, sum3 = 0;
    cin>>n;
    while(n--){
        int x,y,z;
        cin>>x>>y>>z;
        sum1 += x;
        sum2 += y;
        sum3 += z;
    }
    if(sum1 == 0 && sum2 == 0 && sum3 == 0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
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
