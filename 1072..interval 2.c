#include<stdio.h>
int main()
{
    int N, X, in=0, out=0, i;
    scanf("%d", &N);
    for(i=0;i<N;i++)
    {
        scanf("%d", &X);
        if((X==10 || X>10) && (X==20 || X<20))
            in=in+1;
        else
            out=out+1;
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}
