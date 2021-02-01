#include<stdio.h>
int main()
{
    float M[12][12];
    int L, i, j;
    char T;
    float avg, sum=0;
    scanf("%d", &L);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
        scanf("%f", &M[i][j]);
        if(j==L)
            sum=sum+M[i][j];
        }
    }
    scanf("%c ", &T);
    if(T=='S')
    {
        printf("%.1f\n", sum);
    }
    else if(T=='M')
    {
        avg=sum/12;
        printf("%.1f\n", avg);
    }
    return 0;
}
