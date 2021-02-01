#include<stdio.h>
#include<math.h>
int main()
{
    int N, a, i;
    scanf("%d", &N);
    for(i=1;i<=N;i++)
    {
        scanf("%d", &a);
        if(a>0 && a%2==1)
            printf("ODD POSITIVE\n");
        else if(a>0 && a%2==0)
            printf("EVEN POSITIVE\n");
        else if(a<0 && (a%2==1 || a%2==-1))
            printf("ODD NEGATIVE\n");
        else if(a<0 && a%2==0)
            printf("EVEN NEGATIVE\n");
        else if(a==0)
            printf("NULL\n");
    }
    return 0;
}
