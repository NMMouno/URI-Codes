#include<stdio.h>
int main()
{
    double a,b,c,d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    printf("%.4lf\n", sqrt(((a-c)*(a-c))+((b-d)*(b-d))));
    return 0;
}
