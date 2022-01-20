/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        bool t = true;
        unordered_map<char, int> m;
        for(char i: a){
            m[i]++;
        }
        for(char i: a){
            if(m[i] % 2 != 0 && a[i] != a[i+1]){
                t = false;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(t == true){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
