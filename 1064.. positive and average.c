#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, d, e, f, t=0;
    int sum=0;
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
    if(a>=0)
        {
        sum=sum+1;
        t=t+a;
        }
    else
        sum=sum+0;
    if(b>=0)
        {
        sum=sum+1;
        t=t+b;
        }
    else
        sum=sum+0;
    if(c>=0)
        {
        sum=sum+1;
        t=t+c;
        }
    else
        sum=sum+0;
    if(d>=0)
        {
        sum=sum+1;
        t=t+d;
        }
    else
        sum=sum+0;
    if(e>=0)
        {
        sum=sum+1;
        t=t+e;
        }
    else
        sum=sum+0;
    if(f>=0)
        {
        sum=sum+1;
        t=t+f;
        }
    else
        sum=sum+0;
    printf("%d valores positivos\n", sum);
    printf("%.1lf\n", t/sum);
    return 0;
}

