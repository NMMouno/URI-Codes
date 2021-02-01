#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    int L,i, a, V;
    while(scanf("%d",&L)!=EOF)
    {
        int S[L];
        for(i=0;i<L;i++)
        {
        scanf("%d", &V);
        S[i]=V;
        }
        if(S[0]>=S[1])
            a=S[0];
        else
            a=S[1];
        for(i=2;i<L;i++)
        {
            if(a<S[i])
                a=S[i];
        }
        if(a<10)
            printf("1\n");
        else if(a>=10 && a<20)
            printf("2\n");
        else if(a>=20)
            printf("3\n");
    }
    return 0;
}
