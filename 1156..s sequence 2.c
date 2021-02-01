#include<stdio.h>
#include<math.h>
int main()
{
    double S=0,i,j=2;
    for(i=3;i<=39;i=(i+2),j=j*2)
    {
        S=S+(i/j);
    }
    S=1+S;
    printf("%.2lf\n", S);
    return 0;
}

