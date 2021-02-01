#include<stdio.h>
int main()
{
    int a=1,b=60;
    for(a=1,b=60;b>=0;a=a+3,b=b-5)
    {
        printf("I=%d J=%d\n", a,b);
    }
    return 0;
}
