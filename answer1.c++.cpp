#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j;
    cin>>i;
    for(int m=0;m<i;m++)
    {
        string str;
        cin>>str;
 for( int k=6;k<13;k+6){
        j=k;
        if(str[j]!=0)
        cout<<str[j]<<",";
        j=k-2;
        if(str[j]!=0)
        cout<<str[j]<<",";
        j=k+2;
        if(str[j]!=0)
        cout<<str[j]<<",";
        if(k==6)
            cout<<str[1]<<",";
        }
        cout<<endl;
    }
    return 0;
}
