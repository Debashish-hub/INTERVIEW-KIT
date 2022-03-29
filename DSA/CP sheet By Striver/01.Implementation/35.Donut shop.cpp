#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long x = c / b;
        if(c <= a){
            cout<<-1<<" "<<b<<endl;
        }else if(c/b >= a){
            cout<<1<<" "<<-1<<endl;
        }else if(x < a){
            cout<<1<<" "<<b<<endl;
        }
    }

    return 0;
}
