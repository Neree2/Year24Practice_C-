#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int c=0;
int f(int i){
    c++;
    if(i==1){
        return 0;
    }
    if(i==2){
        return 1;
    }
    else{
        return f(i-2)+f(i-1);
    }
    return c;
}

int main()
{
    int i;
    cout << "";
    cin>>i;
    cout<<c<<" "<<f(i)+1 << endl;
    return 0;
}
