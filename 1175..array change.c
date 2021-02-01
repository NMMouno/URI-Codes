#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,N[20];
    for(i=0;i<20;i++)
    {
        scanf("%d", &N[i]);
    }
    for(i=19,j=0;i>=0;i--,j++)
    {
        printf("N[%d] = %d\n", j, N[i]);
    }
    return 0;
}


