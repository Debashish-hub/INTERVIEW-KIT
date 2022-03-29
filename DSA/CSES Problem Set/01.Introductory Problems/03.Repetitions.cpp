#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    long long n = s.length();
    long long ans = 1, temp = 1;
    char c = s[0];
    for(long long i=1; i<n; i++){
        if(s[i] == c){
            temp++;
        }else{
            c = s[i];
            temp = 1;
        }
        ans = max(ans, temp);
    }
    cout<<ans;
    return 0;
}
