vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        sort(candies, candies+N);
        int i = 0, j = N-1 , minres = 0, maxres = 0;
        vector<int> ans;
        while(i <= j){
            minres += candies[i];
            j -= K;
            i++;
        }
        ans.push_back(minres);
        i = 0, j = N-1;
        while(i <= j){
            maxres += candies[j];
            j--;
            i += K;
        }
        ans.push_back(maxres);
        return ans;
    }