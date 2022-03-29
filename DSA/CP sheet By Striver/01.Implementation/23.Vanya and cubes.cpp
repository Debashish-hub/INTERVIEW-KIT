
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, cnt = 0, t = 0;
    cin>>n;
    while(cnt <= n){
        t++;
        cnt += (t * (t+1))/2;
    }
    cout<<t-1;

    return 0;
}
