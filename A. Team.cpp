#include<iostream>
using namespace std;
int main()
{
    int n,petya,vasya,tonya,count=0;
    cin>>n;
    while(n--)
    {
        cin>>petya>>vasya>>tonya;
        if(petya+vasya+tonya>=2)
        {
            count += 1;
        }
    }
    cout<<count<<endl;

    return 0;
}
