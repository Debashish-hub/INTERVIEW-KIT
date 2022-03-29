#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<int> t;
    for(int i=0; i<s.length(); i+=2){
        t.push_back((s[i] - '0'));
    }
    sort(t.begin(), t.end());
    for(int i=0; i<t.size()-1; i++){
        cout<<t[i];
        cout<<"+";
    }
    cout<<t[t.size()-1];
    return 0;
}
