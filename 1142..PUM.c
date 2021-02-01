#include<stdio.h>
int main()
{
    int i=0, j, N, n=0;
    scanf("%d", &N);
    for(j=0;j<N;j++)
    {
        for(i=(i+1);i<(n+4);i++)
        {
            printf("%d ", i);
        }
        printf("PUM\n");
        n=n+4;
    }
    return 0;
}
