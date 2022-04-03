#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    double h,l;
    cin>>h>>l;
    cout<<fixed << setprecision(15)<<(l*l - h*h)/ (2.0*h);
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
