#include<stdio.h>
#include<math.h>
int main()
{
    int N, X, Y, i, sum=0;
    scanf("%d", &N);
    for(i=0;i<N;i++)
    {
        scanf("%d %d", &X, &Y);
        if(X<Y)
        {
            X=X+1;
            for(X;X<Y;X++)
            {
                sum=sum+X;
            }
            printf("%d\n", sum);
        }
        else
        {
            Y=Y+1;
            for(Y;Y<X;Y++)
            {
                sum=sum+Y;
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}
