#include<stdio.h>
int main()
{
    int N, X, Y, i, j, b=0;
    scanf("%d", &N);
    for(i=0;i<N;i++)
    {
        int sum=0;
        scanf("%d", &X);
        if(X%2==1)
            j=X;
        else if(X%2==0)
            j=X+1;
        scanf("%d", &Y);
        for(j;b<Y;j=j+2,b++)
        {
            sum=sum+j;
        }
        b=0;
        printf("%d\n", sum);
    }
    return 0;
}
