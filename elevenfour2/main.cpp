#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,to=0;
    cout << "Enter: " << endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                sum+=1;
            }
        }
        if(sum==2){
            cout<<i<<" ";
            to++;
        }
    }cout<<endl;
    cout<<to;
    return 0;
}
