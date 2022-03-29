#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans = n;
    int i=1;
    while(n >= 1){
        ans += i * (n-1);
        i++;
        n--;
    }
    cout<<ans<<endl;

    return 0;
}
