
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans = "";
    int x = 1;
    for(int i=0; i<n; i+=x){
        ans += s[i];
        x++;
    }
    cout<<ans;

    return 0;
}
