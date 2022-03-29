#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    int c = 0;
    while(n > 0){
        int t = n % 10;
        if( t == 7 || t == 4){
            c++;
        }
        n /= 10;
    }
    if(c == 4 || c == 7)cout<<"YES";
    else cout<<"NO";
    return 0;
}
