#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll solve(ll soldiers[],ll n,ll power){
    ll left=0;
    ll right=n-1;
    ll ans=-1;
    while(left<=right){
        ll mid=(right+left)/2;        
        if(soldiers[mid]>power){           
            right=mid-1;
        }else{
            ans=mid;
            left=mid+1;
        }
    }
    return ans+1;
};


int main() {
    ll num;
    cin >> num;
    ll soldiers[num];                               
    for(ll i=0;i<num;i++){
        cin>>soldiers[i];
    }
    sort(soldiers,soldiers+num);
    ll sum[num];
    sum[0]=soldiers[0];
    for(ll i=1;i<num;i++){
        sum[i]=sum[i-1]+soldiers[i];
    }
    ll Q;
    cin>>Q;
    for(ll i=0;i<Q;i++){
        ll q;
        cin>>q;
        ll res=solve(soldiers,num,q);
        cout<<res<<" "<<sum[res-1]<<endl;
    }
}


