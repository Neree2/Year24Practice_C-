#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int s[n],b[n],mi=1000000000;
    for(int i=0;i<n;i++){cin>>s[i]>>b[i];}
    for(int i=1;i<(1<<n);i++){
        int p=0,t=1;
        for(int j=0;j<n;j++){
            if((i&(1<<j))>0){
            p+=b[j];
            t*=s[j];}}
        int m=p-t;
        m=abs(m);
        if(m<mi){mi=m;}}
    cout<<mi;
    return 0;
}
