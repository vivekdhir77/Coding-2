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

bool checker(int num)
{
    int rem=0;
    while(num!=0)
    {
        rem = num%10;
        if (rem != 7 && rem != 4)
            return false;
        num = num/10;
    }
    return true;
}
int main()
{
    FASTIO
    int n;
    cin>>n;
    bool  check = checker(n);
    if (check)
    {
        cout<<"YES";
        return 0;
    }
    for(int i=1; i<n ;i++)
    {
        if(checker(i))
        {
            if (n%i==0)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}