#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,l=0;
    char s[100];
    cin>>s;
    for(i=1; i<strlen(s); i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            l++;
        }
    }
    if(l==strlen(s)-1)
    {
        for(i=0; i<strlen(s); i++)
        {
            if(s[i]>=65&&s[i]<=90)
            s[i]=97+s[i]-65;
            else if(s[i]>=97&&s[i]<=122)
            s[i]=65+s[i]-97;
        }
    }
    cout<<s;
    return 0;
}