#include <iostream>

using namespace std;

int sum(int i){
    if(i==0){
        return 0;
    }
    else{
        return i*i+sum(i-1);
    }
}

int main()
{
    int i;
    cout<<"";
    cin>>i;
    cout <<i*2<<" " <<sum(i)<< endl;
    return 0;
}
