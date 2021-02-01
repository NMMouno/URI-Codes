#include<stdio.h>
#include<math.h>
int main()
{
    int a=1, b=7, c=7;

    for(a=1;a<=9;a+=2)
    {
        for(b;b>(c-3);b--)
        {
            printf("I=%d J=%d\n", a, b);
        }
        c=c+2;
        b=b+5;
    }
    return 0;
}
