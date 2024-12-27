#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,ma=0;
    cin>>n;
    int a[n];
    vector<int> ans;
    for(int i=0;i<n;i++){cin>>a[i];}
    sort(a,a+n);
    int cou=0;
    for(int i=0;i<n;i++){
        if (i > 0 && a[i] == a[i - 1]) {
            cou++;
        } else {
            cou = 1;
        }
        ma = max(ma, cou);}
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){cou++;}
        else{
            if(cou==ma){
                cout<<a[i-1]<<" ";}
            cou=0;}}
    return 0;
}
