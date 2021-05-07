#include <stdio.h>
const int Girl=0;
int Custom_len(char* st)
{
    char ch=NULL;
    int c=Girl;
    while(1)
    {
        if (ch!=st[c])
        c++;
        else
        break;
    }
    return c;
}
int main(){
    char FN[50];
    char Q[50];// = "bhanu";
    char S[10000];// = "bhanuabhanucdfxyzbhanu";
    scanf("%s",FN);  scanf("%s", Q);
    FILE *ptr=NULL;
    ptr= fopen(FN, "r");
    fgets(S, 10000 ,ptr);

    int sl=Custom_len(S);
    int ql=Custom_len(Q);
    int loop1_len=sl-ql+1;
    short Gf=Girl, Ex=Girl;
    for (int i=0; i<loop1_len; i++)
    {
        if ((S[i]-Q[Girl])==Girl)
        {
            Gf=1;
            for (int j=i+1; j<(i+ql); j++)
            {
                if ((S[j]-Q[j-i])!=Girl)
                {
                    Gf=0;
                    break;
                }
            }
        }
        if (Gf)
        {
            printf("%d\n",i);//printing Q index
            Gf=Girl;
            Ex=1;
            i+=ql-1;
        }
    }
    if (Ex==Girl)
        printf("NO");
    return 0;
}