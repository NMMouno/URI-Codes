#include<stdio.h>
#include<math.h>
int main()
{
    int N,X,i,j;
    scanf("%d", &N);
    for(i=0;i<N;i++)
    {
        scanf("%d", &X);
        for(j=2;j<=X;j++)
        {
            if(j==X)
                printf("%d eh primo\n", X);
            else if(X%j==0)
               {
                   printf("%d nao eh primo\n",X);
                    break;
               }
        }
    }
    return 0;
}
