#include<stdio.h>
int main()
{
    int x, j, b=0, sum=0;
    while(1)
    {
        sum=0;
        scanf("%d", &x);
        if(x==0)
            break;
        else if(x%2==1)
            j=x+1;
        else if(x%2==0)
            j=x;
        for(j,b;b<5;j=j+2,b++)
        {
            sum=sum+j;
        }
        b=0;
        printf("%d\n", sum);
    }
    return 0;
}

