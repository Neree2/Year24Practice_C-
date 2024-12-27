#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool palin(string &str,int start, int last){
    if(start>=last){return true;}
    else if(str[start]!=str[last]){return false;}
    return palin(str,start+1,last-1);}
int main()
{
    string str;
    cin>>str;
    if(palin(str,0,str.length()-1)){cout<<"yes";}
    else{cout<<"no";}
    return 0;
}
