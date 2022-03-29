#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long k,n,w;
    cin>>k>>n>>w;
    long long sum =(w * (w+1))/2;
    sum *= k;
    if(sum <= n)cout<<0;
    else cout<<sum-n;
    return 0;
}
