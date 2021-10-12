bool knows(vector<vector<int> >& M, int a, int b)
    {
        return M[a][b];
    }
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int> st;
        int ans;
        for(int i=0; i<n; i++){
            st.push(i);
        }
        while(st.size() > 1){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if(knows(M,a,b)){
                st.push(b);
            }else{
                st.push(a);
            }
        }
        if(st.empty())return -1;
        ans = st.top();
        st.pop();
        for(int i=0; i<n; i++){
            if(i != ans && (knows(M,ans,i) || !knows(M,i,ans)))
                return -1;
        }
        return ans;
    }