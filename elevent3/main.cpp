#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int too=0,toe=0,k;
    cout<<"";
    cin>>k;
    while(k!=0){
        if((k%2)==0){
            toe+=k;
        }
        else if((k%2)!=0){
            too+=k;
        }
        cout<<"";
        cin>>k;
    }
    cout<<toe<<" "<<too;
    return 0;
}
