#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        int n=int(s[i])+1;
        if((s[i]>'a'&&s[i]<'z')||(s[i]>'A'&&s[i]<'Z')){
            cout<<(char)n;
        }
        else{
            cout<<s[i];
        }
    }
    return 0;
}
