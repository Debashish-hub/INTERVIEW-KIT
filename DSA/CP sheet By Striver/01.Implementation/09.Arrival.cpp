#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int larg = arr[n-1], lp = n-1;
    for(int i=n-1; i>=0; i--){
        if(arr[i] >= larg){
            larg = arr[i];
            lp = i;
        }
    }
    int sml = arr[0], sp = 0;
    for(int i=0; i<n; i++){
        if(arr[i] <= sml){
            sml = arr[i];
            sp = i;
        }
    }
    int ans =  lp + n-1 - sp;
    if(lp > sp)ans--;
    cout<<ans<<endl;
    return 0;
}
