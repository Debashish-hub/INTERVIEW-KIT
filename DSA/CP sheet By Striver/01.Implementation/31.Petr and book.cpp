#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[7];
    for(int i=0; i<7; i++){
        cin>>arr[i];
    }
    int j = 0, sum = 0;
    while(sum < n){
        if(j == 7){
            j = 0;
        }
        if(arr[j] != 0){
            sum += arr[j];
            if(sum >= n){
                cout<<j+1<<endl;
            }
        }
        j++;
    }

    return 0;
}
