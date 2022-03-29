
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        int x = (s[0] - '0');
        int ans = 0;
        ans += (x-1) * 10;
        if(n == 1){
            ans += 1;
        }else if(n == 2){
            ans += 3;
        }else if(n == 3){
            ans += 6;
        }else{
            ans += 10;
        }
        cout<<ans<<endl;
    }

    return 0;
}
