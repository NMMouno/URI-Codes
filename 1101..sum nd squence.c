#include<stdio.h>
#include<math.h>
int main()
{
    int M,N,i,sum;
    for(i=0;i>=0;i++)
    {
    scanf("%d %d", &M,&N);
    if(M<N)
    {
        for(M;M<=N;M++)
        {
            sum=sum+M;
            printf("%d\t",M);
        }
        printf("Sum=%d\n", sum);
    }
    else if(N<M)
        {
            for(N;N<=M;N++)
        {
            sum=sum+N;
            printf("%d\t",N);

        }
        printf("Sum=%d\n", sum);
        }
    else if(M==0 || N==0)
        break;
}
return 0;
}
