#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum=0;
    cout << "Input = ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }cout<<endl;
    }
    for(int i=2;i<=n-2;i++){
        for(int j=2;j<=i;j++){
            sum+=j;
        }
    }
    cout<<"Output = "<<sum;
    return 0;
}
