#include<stdio.h>
#include<math.h>
int main()
{
    char name;
    double a, b;
    scanf("%s", &name);
    scanf("%lf %lf", &a, &b);
    printf("TOTAL = R$ %.2lf\n", a+(.15*b));
    return 0;

}
