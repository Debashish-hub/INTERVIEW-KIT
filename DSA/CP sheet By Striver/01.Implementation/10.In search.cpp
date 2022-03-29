#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int arr[t];
    bool ch = false;
    for(int i=0; i<t; i++){
        cin>>arr[i];
        if(arr[i] == 1)ch = true;
    }
    if(ch){
        cout<<"HARD";
    }else{
        cout<<"EASY";
    }
    return 0;
}
