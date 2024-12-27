#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Input: ";
    getline(cin,s);
    int n=0;
    vector<int> v;
    for(int i=0;i<=s.length();i++){
        n++;
        if(s[i]==' '||s[i]=='-'||i==s.length()){
            v.push_back(n-1);
            n=0;}}
    sort(v.begin(),v.end());
    int b=v.size();
    for(int i=0;i<=s.length();i++){
        n++;
        if(s[i]==' '||s[i]=='-'||i==s.length()){
        if(n-1==v[b-1]){
            for(int j=i-n+1;j<i;j++){cout<<s[j];}}
            n=0;}}
    return 0;
}
