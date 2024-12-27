#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s;
    cout<<"Input: ";
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            transform(s[i+1].begin(),s[i+1].end(),s[i+1].begin(),::t)
        }
    }
    return 0;
}
