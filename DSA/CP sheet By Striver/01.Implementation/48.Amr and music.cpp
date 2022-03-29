#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,days;
    cin >> n >> days;
    vector<pair<int, int>> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i].first;
        arr[i].second = i;
    }
    sort(arr.begin(), arr.end());
    vector<int>ans;
    for(int i=0; i<n; i++){
        if(days < arr[i].first)
            break;
        ans.push_back(arr[i].second + 1);
        days -= arr[i].first;
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return ;
}

int main()
{
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
