#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a[n+1];
        for(int i=0; i<n; i++){
            a[i] = s[i] - '0';
        }
        if(a[0] == 1 || a[n-1] == 1){
            cout<<n*2<<endl;
        }
        else{
            int one = 0,leftVisit = 0,rightVisit = 0,ans = 0;
            for(int i=0; i<n; i++){
                if(a[i] == 1){
                    one = 1;
                    leftVisit = i;
                    break;
                }
            }
            int i = -1;
            for(int j=n-1; j>=0; j--){
                i++;
                if(a[j] == 1){
                    one = 1;
                    rightVisit = i;
                    break;
                }
            }
            ans = 2 * (n -  min(leftVisit,rightVisit));
            if(one == 0){
                cout<<n<<endl;
            }
            else{
                cout<<ans<<endl;
            }
        }
    }

    return 0;
}
