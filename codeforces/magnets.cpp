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
    int start = 0;
    int c=0;
    for(int i=0; i<t;i++)
    {
        string a;
        cin>>a;
        if(i==0 && a=="10")
            start=1;

        if(a=="01" && start==1)
            {
                c++;
                start=0;
            }
        else if(a=="10" && start==0)
        {
            c++;
            start=1;
        }
    }
    cout<<(c+1)<<endl;
}