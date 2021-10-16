        int smaller(int a, int b, int c){
            int temp = min({a,b,c});
 
            if(temp == a)
                return 1;
            else if(temp == b)
                return 2;
            else
                return 3;
        }
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int> ans;
            int a = 0,b = 0,c = 0 , m = INT_MIN;
            while(a<n1 && b<n2 && c<n3){
                if(A[a] == B[b] && B[b] == C[c]){
                    if(A[a] != m){
                        m = A[a];
                        ans.push_back(A[a]);
                    }
                    a++;
                }else{
                    int s = smaller(A[a],B[b],C[c]);
                    if(s==1){
                        a++;
                    }else if(s == 2){
                        b++;
                    }else{
                        c++;
                    }
                }
            }
            return ans;
            
        }