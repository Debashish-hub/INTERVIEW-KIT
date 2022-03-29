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
        int ans = 0, v = 1;
        s = "1" + s;
        for(int i=n; i>=1; i--){
            if(s[i] != '0'){
                ans++;
            }
        }
        cout<<ans<<endl;
        for(int i=n; i>=1; i--){
            if(s[i] != '0'){
                cout<<(s[i] - '0')*v<<" ";
            }
            v *= 10;
        }
        cout<<endl;
    }
    return 0;
}
