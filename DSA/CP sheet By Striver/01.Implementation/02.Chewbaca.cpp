
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i] >= '5' && s[i] <= '9'){
            if (i == 0 && s[i] == '9')	
                continue;
			s[i] = '0' + '9' - s[i];
        }
    }
    cout<<s<<endl;

    return 0;
}
