#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int maxi = max(a,  max(b,c));
    int mini = min(a, min(b,c));
    cout<<maxi - mini<<endl;

    return 0;
}
