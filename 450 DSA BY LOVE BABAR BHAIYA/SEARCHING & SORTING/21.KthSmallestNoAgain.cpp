#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,q;
        cin>>n>>q;
        vector<pair<long long int,long long int>> v;
        long long int a,b;
        for(long long i=0;i<n;i++){
            cin>>a>>b;
            v.push_back({a,b});
        }
        sort(v.begin(),v.end());
        long long int idx=0;
        for(long long int i=1;i<n;i++){
            if(v[idx].second>=v[i].first){
                v[idx].second=max(v[idx].second,v[i].second);
            }
            else{
                idx++;
                v[idx]=v[i];
            }
        }
        v.erase(v.begin()+idx+1,v.end());
        long long int arr[v.size()+1];
        arr[0]=0;
        for(long long int i=0;i<v.size();i++){
            arr[i+1]=(v[i].second-v[i].first)+1;
        }
        for(long long int i=1;i<=v.size();i++){
            arr[i]=arr[i]+arr[i-1];
        }
        long long int k[q];
        for(long long int i=0;i<q;i++){
            cin>>k[i];
        }
        for(long long int i=0;i<q;i++){
            long long int low=0;
            long long int high=v.size()-1;
            long long int ans=-1;
            while(low<=high){
                long long int m=(low+high)/2;
                if(arr[m]<k[i] && arr[m+1]>=k[i]){
                    ans=v[m].first+(k[i]-arr[m]-1);
                    break;
                }
                else if(arr[m]>=k[i]){
                    high=m-1;
                }
                else{
                    low=m+1;
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;

}