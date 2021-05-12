#include<iostream>
#include<cmath>
#include<vector>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define FA(i,start,end) for(int i=start; i<end; i++)
#define FD(i,start,end) for(int i=start; i>=end; i--)
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
typedef long int li;
typedef long long int ll;

using namespace std;
int main()
{
    FASTIO
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    //freopen("error.txt", "w", stderr);
    #endif
    int n;
    cin>>n;
    int freq[5]={};
    for (int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        ++freq[temp];
    }
    int d = freq[4];
    int c = freq[3];
    int b = freq[2];
    int a = freq[1]; 
    int ans=d+c+(b*2+max(0,a-c)+3)/4;
    cout<<ans;
}