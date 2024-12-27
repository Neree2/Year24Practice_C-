#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n,o=0;
    cout << "Input: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        double p=1/pow(i,i);
        cout<<"1/"<<i<<"^"<<i<<" = "<<p<<endl;
        o+=p;

    }
    cout<<"total: "<<o;
    return 0;
}
