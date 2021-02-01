#include<stdio.h>
int main()
{
    int a, b, s, c, MaiorAB;
    scanf("%d %d %d", &a, &b, &c);
    s=(a+b+abs(a-b))/2;
    MaiorAB=(s+c+abs(s-c))/2;
    printf("%d eh o maior\n", MaiorAB);
    return 0;
}
