
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int arr[t];
    for(int i=0; i<t; i++){
        cin>>arr[i];
    }
    int ans = 1, c = arr[0], x = 1;
    for(int i=1; i<t; i++){
        if(arr[i] > c){
            x++;
            c = arr[i];
        }else{
            x = 1;
            c = arr[i];
        }
        ans = max(ans, x);
    }
    cout<<ans;

    return 0;
}
