#include<stdio.h>
int main()
{
    int N, i, a, b;
    scanf("%d", &N);
    int X[N];
    for(i=0;i<N;i++)
    {
        scanf("%d", &X[i]);
    }
    if(X[0]<=X[1])
        {
        a=X[0];
        b=0;
        }

    else
        {
            a=X[1];
            b=1;
        }
    for(i=2;i<N;i++)
    {
        if(X[i]<a)
            {
            a=X[i];
            b=i;
            }
        else
            continue;
    }
    printf("Menor valor: %d\n", a);
    printf("Posicao: %d\n", b);
    return 0;
}
