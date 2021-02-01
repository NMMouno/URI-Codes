#include<stdio.h>
int main()
{
    int X, Z, count=0, sum=0;
    scanf("%d", &X);
    while(1)
    {
        scanf("%d", &Z);
        if(Z>X)
            break;
        else
            continue;
    }
    for(X;sum<Z;X++)
    {
        sum=sum+X;
        count++;
    }
    printf("%d\n", count);
    return 0;
}

