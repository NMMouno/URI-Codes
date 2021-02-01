#include <stdio.h>
main()
{
    char x[5];

    int d1,d2,h1,h2,m1,m2,s1,s2;
    int t,t1,t2;
    scanf("%s %d %d %s %d %s%d %s %d %d %s %d %s %d",x,&d1,&h1,x,&m1,x,&s1,x,&d2,&h2,x,&m2,x,&s2);
    int d,h=0,m=0,s=0;

    t1=(h1*60*60)+(m1*60)+s1;
    t2=(h2*60*60)+(m2*60)+s2;

    if(t2>=t1)
        d=d2-d1;
    else
        d=d2-d1-1;

    if(t2>=t1)
        t=t2-t1;
    else
        t=86400-(t1-t2);

    while(t>=3600){
            h++;
            t=t-3600;

    }
    while(t>=60){
        m++;
        t=t-60;
    }
    while(t>=1){
        s++;
        t=t-1;
    }

printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,h,m,s);
}
