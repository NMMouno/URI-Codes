#include<stdio.h>
int main()
{
    int N, i, j=0, k=1, m=0;
    scanf("%d", &N);
    if(N==1)
    printf("%d",j);
    else
    {
        printf("%d %d",j, k);
    for(i=0;i<(N-2);i++)
    {
        m=j+k;
        j=k;
        k=m;
        printf(" %d", m);
    }
    }
    printf("\n");
    return 0;
}
