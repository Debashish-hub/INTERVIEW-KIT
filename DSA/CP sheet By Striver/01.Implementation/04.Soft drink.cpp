#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int soda = (k*l) / (n * nl);
    int lime = (c * d) / n;
    int salt = p / (np * n);
    cout<<min(soda, min(salt, lime));

    return 0;
}
