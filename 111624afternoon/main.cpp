#include <iostream>
#include <bits/stdc++.h>
using namespace std;
unsigned long long int fac(int n){
    if(n<=0){return 1;}
    else{return n*fac(n-1);}}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    unsigned long long int n,to=0;
    string a="0";
    cin>>n;
    cout<<fac(n);
    string re=to_string(fac(n));
    for(int i=re.length();i>0;i--){
        if(re[i]==a[0]&&re[i+1]==a[0]){to++;}
        else if(re[i]==a[0]&&i==0){to++;}
    }
    cout<<"Number of "<<n<<" factoria have 0 of the end equal "<<to;
    return 0;}
