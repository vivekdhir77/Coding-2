#include<iostream>
#define VIVEK_DHIR ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;
int winning[][3]={
       {0,1,2},
       {0,3,6},
       {0,4,8},
       {1,4,7},
       {2,4,6},
       {2,5,8},
       {3,4,5},
       {6,7,8}};
// 123
// 456
// 789
int count_=0;
short cx=0, co =0;

bool winner(char *c, char ch){
    for (int i=0; i<8;i++)
    {
        if(c[winning[i][0]] == ch &&
            c[winning[i][1]] == ch &&
            c[winning[i][2]] == ch)
            return true;
    }
    return false;
}


bool isInValid(){
    cx=0; co =0;//counts if board is won by x
    int count_x=0, count_o=0; count_=0;

    char board[9];
    for (int i=0; i <9;i++)
    {
        cin>>board[i];
        if (board[i]=='X')
            count_x++;
        else if (board[i]=='O')
            count_o++;
        else
            count_++;
    }
    if (winner(board,'X'))
        cx++;
    if (winner(board,'O'))
        co++;

    int ans = count_x-count_o;

    if ((ans==0 && cx==1) || (ans == 1 && co==1)  
        || (ans<0 || ans>=2) || (cx==1 && co==1) || 
        (count_==0 && ans!=1))
        return true;

    return false;
}
void solve()
{
    bool IsInValid =isInValid();
    if(IsInValid)
        cout<<"3\n";
    else
        if(cx==1 || co==1 || (cx==0 && co==0 && count_==0))
            cout<<"1\n";
        else if(count_!=0)
            cout<<"2\n";
        else
            cout<<"3\n";
}
int main()
{
    VIVEK_DHIR
    int t;
    cin>>t;
    while(t--)
    solve();
}
