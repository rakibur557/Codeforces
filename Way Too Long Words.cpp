#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string word;
        cin>>word;

        //This is we can find last char
        char lc = word[word.length()-1];

        if(word.length()>10){
                //word.length()-2 using for finding num of char without first and last cahr
            cout<<word[0]<< word.length()-2<<lc<<endl;
        }
        else
            cout<<word<<endl;
    }
    return 0;
}
