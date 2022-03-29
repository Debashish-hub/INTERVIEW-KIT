
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m, ans = 0;
        cin>>n>>m;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                char c;
                cin>>c;
                if(i == n-1 && c == 'D'){
                    ans++;
                }
                if(j == m-1 && c == 'R'){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
