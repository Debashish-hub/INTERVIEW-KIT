//////////First Repeating word in a string /////////////////

#include<bits/stdc++.h>
using namespace std;
void solve(string s)
{
	unordered_map<string,int> mp; 
	string t="",ans="";
	for(int i=s.length()-1;i>=0;i--){
		if(s[i]!=' '){
			t+=s[i];
		}else{
			mp[t]++;
			if(mp[t]>1)
			ans=t;
			t="";
		}
	}
			mp[t]++;
			if(mp[t]>1)
			ans=t;
						
	if(ans!="")
	{
		reverse(ans.begin(),ans.end());
		cout<<ans<<'\n';
	}
	else
	cout<<"No Repetition\n";
}
int main()
{
	string u="Ravi had been saying that he had been there";
	string v="Ravi had been saying that";
	string w="he had had he";
	solve(u);
	solve(v);
	solve(w);
	return 0;
}


//////////Second most Repeating word in a string /////////////////
string secFrequent (string arr[], int n)
    {
        //code here.
        int firstm = -1;
        int secondm = -1;
        unordered_map< string, int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        for(auto it : mp){
         if(it.second > firstm){
            firstm = it.second;
         }
        }
        string ans="";
        for(auto it : mp){
            if(it.second != firstm  &&  it.second > secondm){
                ans = it.first;
                secondm = it.second;
            }
        }
        return ans;
    }