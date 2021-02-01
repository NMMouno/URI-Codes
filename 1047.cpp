#include<iostream>
using namespace std;
int main()
{
    int h=0, m, h1, m1, h2, m2, t1, t2, t;
    cin>>h1>>m1>>h2>>m2;
    t1=(h1*60)+m1;
    t2=(h2*60)+m2;
    if(t2>t1)
        t=t2-t1;
    else if(t1>t2)
        t=1440-(t1-t2);
    else
        t=1440;
    while(t>=60)
    {
        h++;
        t=t-60;
    }
    m=t;
    cout<<"O JOGO DUROU " << h <<" HORA(S) E "<< m <<" MINUTO(S)"<<endl;
}
