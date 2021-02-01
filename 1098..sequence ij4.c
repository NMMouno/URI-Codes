#include<stdio.h>
int main()
{
    float i, a[3]={1,2,3};
    int j;
    for(i=0;i<2.1;i=i+.2)
    {
        for(j=0;j<3;j++)
        {
            printf("I=%.1f J=%.1f\n", i, a[j]);
            a[j]=a[j]+.2;
        }
    }
    return 0;
}
