int evaluatePostfix(string S)
    {
        // Your code here
        stack<int> st;
        for(int i=0; i<S.length(); i++){
            if(S[i] >= '0' && S[i] <= '9'){
                st.push(S[i]-'0');
            }else{
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();
                if(S[i] == '*'){
                    st.push(a*b);
                }else if(S[i] == '/'){
                    st.push(b/a);
                }else if(S[i] == '+'){
                    st.push(b+a);
                }else if(S[i] == '-'){
                    st.push(b-a);
                }
            }
            
        }
        return st.top();
    }