#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans = 0, t = 0;
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        t = t - a + b;
        ans = max(ans, t);
    }
    cout<<ans;
    return 0;
}
