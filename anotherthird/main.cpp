#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ton=0,top=0,k;
    cout << "Enter Number: " << endl;
    cin>>k;
    while(k!=0){
        if((k%2)==0){
            top+=k;
        }
        else if((k%2)!=0){
            ton+=k;
        }
        cout << "Enter Number: " << endl;
        cin>>k;

    }
    cout<<top<<" "<<ton;
    return 0;
}
