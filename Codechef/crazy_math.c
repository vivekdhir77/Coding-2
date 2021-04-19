#include<stdio.h>
#include<string.h>
#define ll unsigned long long int
ll  eval(char* ch, int *i){
    ll res=0;
    while((ch[(*i)]>='0' && ch[(*i)]<='9'))
    {
        res = res*10 + (ch[(*i)]-48);
        ++(*i);
    }
    return res;
}
ll arthmetic(char *ch)
{
    ll sum =0;
    int opr=1;// stores which operation to perform
    for (int i=0; i<strlen(ch);)
    {
        if (ch[i]=='-')
        {
            opr*=-1;
            i++;
        }
        else if (ch[i]=='+')
            i++;
        else if ((ch[i]>='0' && ch[i]<='9'))
        {
            ll temp= eval(ch, &i);//converting string to integer
            sum = sum + opr*temp;
            opr=1;
        }
    }
    return sum;
}
int main()
{
    char ch[2000];
    scanf("%s",ch);
    printf("%lld",arthmetic(ch));
}