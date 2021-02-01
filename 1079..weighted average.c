#include<stdio.h>
#include<math.h>
int main()
{
    int N, i;
    float a, b, c, avrg;
    scanf("%d", &N);
    for(i=1; i<=N;i++)
    {
        scanf("%f %f %f", &a, &b, &c);
        avrg=(a*2+b*3+c*5)/10;
        printf("%.1f\n", avrg);
    }
    return 0;
}
