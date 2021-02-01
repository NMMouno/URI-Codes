#include<stdio.h>
#include<math.h>
int main()
{
    int N, a;
    scanf("%d", &N);
    for(a=1;a<=N; a++)
    {
        scanf("%d", &a);
        if(a>0 && a%2==1)
            printf("ODD POSITIVE\n");
        else if(a>0 && a%2==0)
            printf("EVEN POSITIVE\n");
        else if(a<0 && a%2==1)
            printf("ODD NEGATIVE\n");
        else if(a<0 && a%2==0)
            printf("EVEN NEGATIVE\n");
        else if(a==0)
            printf("NULL\n");
    }
    return 0;
}
