#include<stdio.h>
#include<math.h>
int main()
{
    int N,i,sum=1;
    scanf("%d", &N);
    for(i=N;i>=1;i--)
    {
        sum=i*sum;
    }
    printf("%d\n",sum);
    return 0;
}
