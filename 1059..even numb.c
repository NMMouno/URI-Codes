#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d", &b);
    for(a=1;a<=b;a++)
    {
        if(a%2==1 && (b>=1 && b<=1000))
        printf("%d\n", a);
    }
    return 0;
}
