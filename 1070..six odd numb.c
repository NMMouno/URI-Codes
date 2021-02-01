#include<stdio.h>
#include<math.h>
int main()
{
    int X,a;
    scanf("%d", &X);
    a=X;
    for(;X<a+12;X++)
    {
        if(X%2==1)
        printf("%d\n", X);
    }
    return 0;
}
