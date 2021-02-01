#include<stdio.h>
#include<math.h>
int main()
{
    int a=1, b=7;
    for(a=1;a<=9;a+=2)
    {
        for(b;b>4;b--)
        {
            printf("I=%d J=%d\n",a, b);
        }
        b=b+2;
    }
    return 0;
}
