#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,T,m;
    scanf("%d", &T);
    for(m=1;m<=T;m++)
    {
        int sum = 0;
    scanf("%d %d", &a, &b);
    if(a>b)
    {
        for(b;b<=a;b++)
        {
            if(b%2==1 || b%2==-1)
                sum=sum+b;
        }
         printf("Case %d: %d\n",m, sum);
    }
    else if(b>a)
    {
        for(a;a<=b;a++)
        {
            if(a%2==1 || a%2==-1)
                sum=sum+a;
        }
        printf("Case %d: %d\n",m, sum);
    }
    }
    return 0;
}
