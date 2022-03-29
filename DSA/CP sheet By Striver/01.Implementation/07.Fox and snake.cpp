#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    bool ch = false;
    for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			ch = false;
			if(i % 2 == 1) ch = true;
			else{
				if(i % 4 == 2) ch = (j == m);
				if(i % 4 == 0) ch = (j == 1);
			}
			cout << (ch ? "#" : ".");
		}
		cout << endl;
	}
    return 0;
}