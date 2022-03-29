#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;


void solve(){
    string s;
    cin>>s;
    int count[26] = {0};
    for(int i=0; i<s.length(); i++){
        count[s[i] - 65]++;
    }
    int temp = 0, pos = 0;
    for(int i=0; i<26; i++){
        if(count[i] % 2 != 0){
            temp++;
            pos = i;
        }
    }
    bool c = false;
    if(temp == 1)c = true;
    if(temp > 1){
        cout<<"NO SOLUTION"<<endl;
    }else{
        for(int i = 0; i < 26; i++)
            for(int j = 0; j < count[i]/2; j++)
                cout<<(char) (i+'A');
        if(c){
            cout<<(char) (pos+'A');
        }
        for(int i = 25; i >= 0; i--)
            for(int j = 0; j < count[i]/2; j++)
                cout<<(char) (i+'A');
    }
}

int main()
{
    int t =1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
