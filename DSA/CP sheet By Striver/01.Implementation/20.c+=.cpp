#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        int ans = 0;
        int mi = min(a,b);
        while(a <= n && b <= n){
            if(mi == a){
                a = a+b;
                mi = b;
            }else{
                b = a+b;
                mi = a;
            }
            ans++;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
