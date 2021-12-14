vector<int> Solution::findPerm(const string A, int B) {
    vector<int> ans;
    int l=1,r=B;
    for(int i=0;i<B;i++){
        switch(A[i]){
            case 'I':{
                ans.push_back(l++);
                break;
            }
            case 'D':{
                ans.push_back(r--);
                break;
            }
        }
    }
    switch(A[B-2]){
        case 'I':{
            ans.push_back(l++);
            break;
        }
        case 'D':{
            ans.push_back(r--);
            break;
        }
    }
    return ans;
}
