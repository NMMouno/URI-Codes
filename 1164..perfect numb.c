#include<stdio.h>
int main()
{
    int N, i, X, j;
    scanf("%d", &N);
    for(i=1;i<=N;i++)
    {
        int sum=0;
        scanf("%d", &X);
        for(j=1;j<X;j++)
        {
            if(X%j==0)
                sum=sum+j;
            else
                continue;
        }
        if(sum==X)
            printf("%d eh perfeito\n", X);
        else
            printf("%d nao eh perfeito\n", X);
    }
    return 0;
}

