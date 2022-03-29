#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    char c = s[0];
    if(isupper(c)){
        cout<<s;
    }else{
        s[0] = toupper(s[0]);
        cout<<s;
    }

    return 0;
}
