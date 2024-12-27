#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    string a,b;
    cin>>a;
    char s;
    cin>>s;
    cin>>b;
    int si,se;
    if(s=='*'){
        for(int i=0;i<(a.size()+b.size())-1;i++){
            if(i==0){cout<<1;}
            else{cout<<0;}
        }}
    if(a.size()>b.size()){
        si=a.size();
        se=b.size();}
    else{si=b.size();
        se=a.size();}
    if(s=='+'){
        for(int i=0;i<si;i++){
            if(i==0){
                if(si==se){cout<<2;}
                else{cout<<1;}}
            else if(i==si-se){cout<<1;}
            else{cout<<0;}
        }
    }
    return 0;
}
