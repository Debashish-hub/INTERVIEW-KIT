#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;

bool b[17];

void solve(int N){
    for(int i = N; i > 0; i--)
        cout<<b[i];
    cout<<endl;
}

int main(){
    int N;
    cin>>N;

    solve(N);
    for(int i = 1; i < (1<<N); i++){
        int LSB = __builtin_ffs(i);
        b[LSB] ^= 1;
        solve(N);
    }
}
