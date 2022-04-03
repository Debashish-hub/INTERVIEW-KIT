#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    string s;
    cin>>s;
    int sum = 0, even = 0;
    bool zero = false;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '0'){
            zero = true;
        }
        if(int(s[i] - '0') % 2 == 0){
            even ++;
        }
        sum += int(s[i] - '0');
    }
    if(sum % 3 == 0 && zero && even >= 2){
        cout<<"red"<<endl;
    }else{
        cout<<"cyan"<<endl;
    }
    
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
