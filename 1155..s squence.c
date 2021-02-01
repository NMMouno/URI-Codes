#include<stdio.h>
#include<math.h>
int main()
{
    double S=0,i,j=1;
    for(i=1;i<=100;i++)
    {
        S=S+(j/i);
    }
    printf("%.2lf\n", S);
    return 0;
}
