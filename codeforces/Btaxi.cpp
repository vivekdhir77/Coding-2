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

int nullifier(int a,int b)
{
    if (a-b>0)
    return (a-b);
    else 
    return 0;
}
bool minimum(int a, int b)
{
    if (a<b)
    return true;
    else
    return false;
}

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
    int taxi4 = freq[4];

    int taxi31 = min(freq[3],freq[1])+
                +nullifier(freq[3],freq[1]);

    if (minimum(freq[3],freq[1]))
    {
        freq[1] -= freq[3];
        freq[3]-=freq[3];
            
    }
    else
    {
        freq[3]-=freq[1];
        freq[1] -= freq[1];
    }

    // cout<<"taxi 3 1= "<<taxi31<<endl;

    
    int taxi21 = min(freq[2],freq[1]/2);

    // cout<<"freq 1= "<<freq[1]<<endl;
    // cout<<"freq 2= "<<freq[2]<<endl;


    if (minimum(freq[2],freq[1]/2))
    {
        freq[1] -= freq[2]*2;
        freq[2]-=freq[2];
            
    }
    else
    {
        freq[2]-=(freq[1]/2);
        freq[1] = (freq[1]%2);
    }


    if (freq[1]!=0 && freq[2]!=0)
    {
        taxi21 += 1;
        freq[2] -=1;
        freq[1] -=1;
    }

    // cout<<"taxi 2 1="<<taxi21<<endl;

    // cout<<"freq 1 = "<<freq[1]<<endl;

    int taxi1=freq[1]/4;
    freq[1] = freq[1]%4;;

    taxi1+= freq[1]/2;
    freq[1] = freq[1]%2;

    taxi1 += freq[1];

    // cout<<"taxi 1 ="<<taxi1<<endl;

    int taxi2=freq[2]/2+freq[2]%2;

    int ans = taxi4+taxi31+
    taxi21+taxi2+ taxi1;


    // cout<<freq[4]<<endl;
    // cout<<min(freq[3],freq[1])<<endl;
    // cout<<"3 = "<<freq[3]<<" 1 = "<<freq[1]<<endl;
    // cout<<absa(freq[3],freq[1])<<endl;
    // cout<<freq[2]%2<<endl;
    // cout<<freq[2]/2<<endl;
    cout<<ans;
}