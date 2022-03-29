#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    int arr[n];
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<=n; i++){
        int l = max(1,i-x);
		int r = min(n,i+y);
		int flag = 1;
		for(int j=l; j<=r; j++){
		    if(j != i && arr[j] <= arr[i]){
		        flag = 0;
		        break;
		    }
		}
		if(flag){
			cout<<i;
			break;
		}
    }

    return 0;
}
