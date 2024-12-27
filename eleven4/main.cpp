#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,to=0;
    cout << "Enter Your Number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=1;j<=i;j++){
            if((i%j)==0){
                sum++;}
            }
        if(sum==2){
            cout<<i<<" ";
            to+=1;
        }
    }cout << endl;
    cout<<to;
    return 0;
}
