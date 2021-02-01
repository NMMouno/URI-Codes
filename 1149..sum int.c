#include<stdio.h>
int main()
{
    int A,N, i, sum=0;
    scanf("%d", &A);
    while(1)
    {
        scanf("%d", &N);
        if(N<=0)
            continue;
        else
            break;
    }
    for(i=0;i<N;i++)
    {
        sum=A+sum;
        A++;
    }
    printf("%d\n", sum);
    return 0;
}
