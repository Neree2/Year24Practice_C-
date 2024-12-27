#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,M,Q;
    cin>>N>>M>>Q;
    int a[N][M],sum=0,err=0;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<Q;i++){
        int po1,po2;
        string po3;
        cin>>po1>>po2>>po3;
        if(po3=="N"){
            if(po1 >= 0 && po1 < N && po2 >= 0 && po2 < M) {
                sum += a[po1][po2];
            }
        }
        if(po3=="U"){
            if(po1-1 >= 0 && po1-1 < N && po2 >= 0 && po2 < M) {
                sum += a[po1-1][po2];
            } else {
                err++;
            }
        }
        if(po3=="D"){
            if(po1+1 >= 0 && po1+1 < N && po2 >= 0 && po2 < M) {
                sum += a[po1+1][po2];
            } else {
                err++;
            }
        }
        if(po3=="L"){
            if(po1 >= 0 && po1 < N && po2-1 >= 0 && po2-1 < M) {
                sum += a[po1][po2-1];
            } else {
                err++;
            }
        }
        if(po3=="R"){
            if(po1 >= 0 && po1 < N && po2+1 >= 0 && po2+1 < M) {
                sum += a[po1][po2+1];
            } else {
                err++;
            }
        }
    }

    cout << sum<<" "<< err;
    return 0;
}
