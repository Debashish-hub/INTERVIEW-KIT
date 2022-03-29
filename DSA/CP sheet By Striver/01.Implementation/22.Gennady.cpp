
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    string arr[5];
    bool ch  = false;
    for(int i=0; i<5; i++){
        string t;
        cin>>t;
        arr[i] = t;;
        if(s[0] == t[0] || s[1] == t[1])ch = true;
    }
    if(ch){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
