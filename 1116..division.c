#include<stdio.h>
#include<math.h>
int main()
{
    int X,Y,N,i,j;
    scanf("%d", &N);
    for(i=0;i<N;i++)
    {
        scanf("%d %d", &X, &Y);
        if(Y!=0 &&(X>=0 || X<=0))
            printf("%.1f\n", X/Y);
        else if(Y==0)
            printf("divisao impossivel\n");
    }
    return 0;
}
