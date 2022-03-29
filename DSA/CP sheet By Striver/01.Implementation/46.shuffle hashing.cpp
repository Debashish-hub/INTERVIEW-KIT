#include <bits/stdc++.h>
using namespace std;

void solve(){
        string a,b;
        cin>>a;
        cin>>b;
        vector<int> counta(26);
        if(a.length() > b.length()){
            cout<<"NO"<<endl;
            return;
        }
        for(int i=0; i<a.length(); i++){
            counta[a[i] - 'a']++;
        }
        for(int i=0; i<b.length()-a.length()+1; i++){
            vector<int> countb(26);
            for(int j=i; j<i+a.length(); j++){
                countb[b[j] - 'a']++;
            }
            if(countb == counta){
                cout<<"YES"<<endl;
                return ;
            }
        }
        cout<<"NO"<<endl;
        return;
    }

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
