#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Input: ";
    getline(cin,s);
    ios_base::sync_with_stdio(0);cin.tie(0);
    for(int i=0;i<s.length();i++){
        if(i==0){cout<<(char)toupper(s[i]);}
        if(s[i]==' '){
            cout<<' '<<(char)toupper(s[i+1]);}
        else if(s[i-1]!=' '&&i!=0){
            cout<<s[i];
        }}
    return 0;
}
