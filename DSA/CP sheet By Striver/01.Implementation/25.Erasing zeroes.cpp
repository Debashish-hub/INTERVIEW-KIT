
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len = s.length();
        int start = 0, end = len-1;
        while(s[start] == '0' && start <= len){
            start++;
        }
        while(s[end] == '0' && end >= 0){
            end--;
        }
        int ans = 0;
        while(start < end){
            if(s[start] == '0'){
                ans++;
            }
            start++;
        }
        cout<<ans<<endl;
    }

    return 0;
}
