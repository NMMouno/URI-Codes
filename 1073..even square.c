#include<stdio.h>
#include<math.h>
int main()
{
    int N, a;
    scanf("%d", &N);
    if(N>5 && N<2000)
    for(a=1; a<=N; a++)
    {
        if(a%2==0)
            printf("%d^2 = %d\n", a, a*a);
    }
    return 0;
}
