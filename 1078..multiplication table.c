#include<stdio.h>
#include<math.h>
int main()
{
    int N,i;
    scanf("%d", &N);
    for(i=1;i<=10;i++)
    {
        if(N>1 && N<1000)
            printf("%d x %d = %d\n",i, N, i*N);
    }
    return 0;
}
