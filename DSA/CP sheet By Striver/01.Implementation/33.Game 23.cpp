#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    if(n % m != 0){
        cout<<-1<<endl;
    }else{
        int ans = 0;
        n /= m;
        while(n % 3 == 0){
            n /= 3;
            ans++;
        }
        while(n % 2 == 0){
            n /= 2;
            ans++;
        }
        if(n != 1){
            cout<<-1<<endl;
        }else{
            cout<<ans<<endl;
        }
    }

    return 0;
}
