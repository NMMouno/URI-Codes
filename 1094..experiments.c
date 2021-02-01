#include<stdio.h>
#include<math.h>
int main()
{
    int i=1, N, Amount, c=0, r=0, s=0, total=0;
    char Type;
    float cc, rr, ss;
    scanf("%d", &N);
    while(i<=N)
    {
        scanf("%d ", &Amount);
        scanf("%c", &Type);
        if(Type=='C')
            c=c+Amount;
        else if(Type=='R')
            r=r+Amount;
        else if(Type=='S')
            s=s+Amount;
        i++;
    }
    total=c+r+s;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    cc=(float)c/total*100;
    rr=(float)r/total*100;
    ss=(float)s/total*100;
    printf("Percentual de coelhos: %.2f %%\n", cc);
    printf("Percentual de ratos: %.2f %%\n", rr);
    printf("Percentual de sapos: %.2f %%\n", ss);
    return 0;
}
