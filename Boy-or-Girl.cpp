#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cin>>name;
    sort(name.begin(),name.end());
    int size = name.length();
    int ans = 0;
    for(int i=0; i<size; i++)
    {
        if(name[i] != name[i+1])
            ans++;
    }
    //cout<<ans<<endl;
    if(ans%2 != 0){
        cout<<"IGNORE HIM!"<<endl;
    }
    else
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    return 0;
}