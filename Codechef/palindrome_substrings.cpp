#include<iostream>
#include<cmath>
#include<vector>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define FA(i,start,end) for(int i=start; i<end; i++)
#define FD(i,start,end) for(int i=start; i>=end; i--)
typedef long int li;
typedef long long int ll;

using namespace std;

void solve()
{
    string A, B;
    cin>>A>>B;

    int freqA[26]={0},freqB[26]={0};
    for (int i=0; i<A.length(); i++)
    {
        freqA[A[i]-97]++;
    }
    for (int i=0; i<B.length(); i++)
    {
        freqB[B[i]-97]++;
    }
    for (int i=0; i<26; i++)
    {
        if (freqA[i]>=1 && freqB[i]>=1)
        {cout<<"Yes\n";
        return;}
    }
    cout<<"No\n";
    return;
}

int main()
{
    int t; cin>>t;
    while(t--)
    solve();
}