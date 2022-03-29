#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    long long ans =0,  cur = INT_MAX;;
    for(int i=n-1; i>=0; i--){
        cur = min(cur - 1, arr[i]);
        cur = max(0LL, cur);
        ans += cur;
        
    }
    cout<<ans;

    return 0;
}
