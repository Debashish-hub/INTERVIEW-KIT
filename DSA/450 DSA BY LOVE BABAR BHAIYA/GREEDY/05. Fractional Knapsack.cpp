static bool comp(Item a, Item b){
        double x = (double)a.value / a.weight;
        double y = (double)b.value / b.weight;
        return x > y;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr+n, comp);
        double ans = 0.0;
        for(int i=0; i<n; i++){
            if(arr[i].weight <= W){
                ans += arr[i].value;
                W -= arr[i].weight;
            }else{
                ans += arr[i].value * ((double)W / arr[i].weight);
                break;
            }
        }
        return ans;
    }