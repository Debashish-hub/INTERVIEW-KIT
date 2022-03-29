#include <bits/stdc++.h>
using namespace std;
int a[110][110];
int vis1[110];
int vis2[110];
void solve(){
    int n,m;scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            scanf("%d",&a[i][j]);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]==0)
            {
                vis1[i]=1;
                vis2[j]=1;
            }
        }
    }
    int sum1=0;
    for(int i=1;i<=n;i++)
        sum1+=vis1[i];
    int sum2=0;
    for(int i=1;i<=m;i++)
        sum2+=vis2[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]==1)
            {
                if(sum1==n||sum2==m)
                {
                    printf("NO\n");
                    return ;
                }
                if(vis1[i]&&vis2[j])
                {
                    printf("NO\n");
                    return ;
                }
            }
        }
    }
    printf("YES\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(vis1[i]||vis2[j])
            {
                printf("0 ");
            }
            else
                printf("1 ");
        }
        printf("\n");
    }
}

int main()
{
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
