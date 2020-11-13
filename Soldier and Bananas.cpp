#include<iostream>
using namespace std;
int main()
{
    //int k,w;
    long long int k,n,w,price=0;
    cin>>k>>n>>w;
     for(int i=1; i<=w; i++)
     {
         price += i*k;
     }
     if(n<price)
     {
         cout<<price-n<<endl;
     }
     else
        cout<<"0"<<endl;
    return 0;
}
