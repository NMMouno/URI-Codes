#include<stdio.h>
#include<math.h>
int main()
{
    int X,Y,sum=0;
    scanf("%d %d", &X, &Y);
    if(X<Y)
    {
       for(X;X<=Y;X++)
       {
           if(X%13!=0)
            sum=sum+X;
       }
       printf("%d\n",sum);
    }
    else if(Y<X)
    {
        for(;Y<=X;Y++)
       {
           if(Y%13!=0)
            sum=sum+Y;
       }
       printf("%d\n",sum);
    }
    return 0;

}
