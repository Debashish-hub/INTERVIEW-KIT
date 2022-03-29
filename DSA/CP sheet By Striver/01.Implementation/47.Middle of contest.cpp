#include <bits/stdc++.h>
using namespace std;

void solve(){
    int h1, m1;
	scanf("%d:%d", &h1, &m1);
	int h2, m2;
	scanf("%d:%d", &h2, &m2);
	int t1 = h1 * 60 + m1;
	int t2 = h2 * 60 + m2;
	int t3 = (t1 + t2) / 2;
	printf("%02d:%02d\n", t3 / 60, t3 % 60);
        
}

int main()
{
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
