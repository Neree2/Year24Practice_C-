#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m],b[n][m],na[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cin>>a[i][j];}}
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>b[i][j];
            na[i][j]=a[i][j]+b[i][j];}}
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){cout<<na[i][j]<<" ";}
        cout<<'\n';}
    return 0;
}
