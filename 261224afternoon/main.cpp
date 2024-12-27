#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin>> n;
    float X[n],Y[n],ans,ma=INT_MIN;
    for(int i=0;i<n;i++){cin>>X[i]>>Y[i];}
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                ans=abs(X[i]*Y[j]+X[j]*Y[k]+X[k]*Y[i]-Y[i]*X[j]-Y[j]*X[k]-Y[k]*X[i])/2;
                ma = max(ans, ma);

            }
        }
    }
    cout<<fixed<<setprecision(3)<<ma;
    return 0;
}
