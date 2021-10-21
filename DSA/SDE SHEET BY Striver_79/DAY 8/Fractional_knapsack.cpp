//Fractional Knapsack Problem	

class Solution
{
    public:
    static bool mycmp(Item a, Item b){
        double x = (double)a.value/a.weight;
        double y = (double)b.value/b.weight;
        return x>y;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr, arr+n, mycmp);
        double res = 0.0;
        for(int i=0; i<n; i++){
            if(arr[i].weight <= W){
                res += arr[i].value;
                W = W - arr[i].weight;
            }else{
                res +=  arr[i].value * ((double) W / arr[i].weight);
                break;
            }
        }
        return res;
        
    }
        
};
