#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        stack<int> st;
        for(int i=1; i<=n; i++){
            st.push(i);
        }
        cout<<2<<endl;
        while(st.size() > 1){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            cout<<b<<" "<<a<<endl;
            st.push((a+b+1) / 2);
        }
    }

    return 0;
}
