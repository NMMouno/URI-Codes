#include<iostream>
using namespace std;
int main()
{
    int N, a;
    while((cin>>a!=EOF))
    {
        cin>>N;
        if(N==0)
            cout<<"vai ter copa!"<<endl;
        else
            cout<<"vai ter duas!"<<endl;
    }
    return 0;
}
