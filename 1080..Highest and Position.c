#include<stdio.h>
#include<math.h>
int main()
{
    int arr[100], a, b, i;
    for(i=0;i<100;i++)
    {
        scanf("%d", &arr[i]);
    }
    if(arr[0]>arr[1])
    {
            a=arr[0];
            b=1;
    }
    else
    {
            a=arr[1];
            b=2;
    }
    for(i=2;i<100;i++)
    {
        if(a<arr[i])
            {
                a=arr[i];
                b=i+1;
            }
    }
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}
