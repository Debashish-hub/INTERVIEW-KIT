#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    if(n < m){
        cout<<-1<<endl;
    }else{
        int lower_bound = (n+1)/2 ;
        int ans = (lower_bound+m-1)/m * m ;
        cout<<ans<<endl;
    }

    return 0;
}
