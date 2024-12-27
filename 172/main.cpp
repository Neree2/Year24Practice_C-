#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int a[n][m],sum1=0,sum2=0;
    if(n >= 1 && m >= 1 && n <= 15 && m <= 15){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){cin>>a[i][j];}}
        for (int j = 0; j < m; j++) {
            sum1 += a[0][j];
        }
        for (int j = 0; j < m; j++) {
            sum1 += a[n-1][j];
        }
        for (int i = 1; i < n-1; i++) {
            sum2 += a[i][0];
        }
        for (int i = 1; i < n-1; i++) {
            sum1 += a[i][m-1];
        }
}
    cout<<max(sum1,sum2);
    return 0;
}
