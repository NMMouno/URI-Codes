#include<iostream>
using namespace std;
int main()
{
    int a,i;
    float sum=0;
    for(i=1;i>=0;i++)
    {
        cin>>a;
        if(a<0)
            break;
        else
            sum=sum+a;
    }
    cout<<sum/(i-1)<<endl;
    return 0;
}
