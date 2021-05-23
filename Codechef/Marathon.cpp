#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
typedef long int li;
typedef long long int ll;
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a > b ? b : a)
#define FA(i, start, end) for (int i = start; i < end; i++)
#define FD(i, start, end) for (int i = start; i >= end; i--)
#define VIVEK_DHIR ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define in(t) ll t;cin>>t;
#define tc(t) while(t--)

int main()
{
    VIVEK_DHIR
    in(t);
    tc(t)
    {
        in(D);in(d);in(A);in(B); in(C);
        int ans = D*d;
        if(ans>=42)
        cout<<C<<endl;
        else if(ans>=21)
        cout<<B<<endl;
        else if(ans>=10)
        cout<<A<<endl;
        else
        cout<<"0\n";
    }
}