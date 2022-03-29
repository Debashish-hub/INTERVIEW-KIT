#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, sum = 0;
    cin>>n;
    int arr[n-1];
    for(long long i=0; i<n-1; i++){
        cin>>arr[i];
        sum += arr[i];
    }
    long long asum = (n * (n+1))/2;
    cout<<asum - sum<<endl;
    return 0;
}
