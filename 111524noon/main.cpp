#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s;
    cin>>s;
    cout<<".";
    for(int i=0;i<s.length();i++){
        if((i+1)%3==0){cout<<".*..";}
        else{cout<<".#..";}
        }
        cout<<'\n'<<".";
    for(int i=0;i<s.length();i++){
        if((i+1)%3==0){cout<<"*.*.";}
        else{cout<<"#.#.";}
        }cout<<'\n'<<"#";
    for(int i=0;i<s.length();i++){
        if((i+1)%3==0){cout<<"."<<s[i]<<".*";}
        else if((i+1)%3==2&&(i+1)!=s.length()){cout<<"."<<s[i]<<".*";}
        else{cout<<"."<<s[i]<<".#";}
        }cout<<'\n'<<".";
    for(int i=0;i<s.length();i++){
        if((i+1)%3==0){cout<<"*.*.";}
        else{cout<<"#.#.";}
        }cout<<'\n'<<".";
    for(int i=0;i<s.length();i++){
        if((i+1)%3==0){cout<<".*..";}
        else{cout<<".#..";}
        }
    return 0;}
