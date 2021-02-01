#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, d, e, f;
    int sum=0;
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
    if(a>=0)
        sum=sum+1;
    else
        sum=sum+0;
    if(b>=0)
        sum=sum+1;
    else
        sum=sum+0;
    if(c>=0)
        sum=sum+1;
    else
        sum=sum+0;
    if(d>=0)
        sum=sum+1;
    else
        sum=sum+0;
    if(e>=0)
        sum=sum+1;
    else
        sum=sum+0;
    if(f>=0)
        sum=sum+1;
    else
        sum=sum+0;
    printf("%d valores positivos\n", sum);
    return 0;
}
