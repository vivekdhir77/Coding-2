#include<iostream>
#include<cmath>
#include<vector>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define FA(i,start,end) for(int i=start; i<end; i++)
#define FD(i,start,end) for(int i=start; i>=end; i--)
#define VIVEK_DHIR ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
typedef long int li;
typedef long long int ll;

using namespace std;

int main()
{
    VIVEK_DHIR
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    string ans= "hello";
    string inp;
    cin>>inp;
    int len = inp.length();
    int j=0,i=0;
    for (;i<5;)
    {
        for(;j<len;j++)
        {
            if(ans[i]==inp[j])
            {
                i++;
            }
            if(j==(len-1) && i<5)
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    if(i==5)
    cout<<"YES";
    else
    cout<<"NO";
}