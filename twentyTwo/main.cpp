#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cout<<"Input the size of the square matrix : ";
    cin>>a;
    int ele[a][a];
    cout << "Input elements in the first matrix : "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cout<<"element - ["<<i<<"],["<<j<<"] : "<<" ";
            cin>>ele[i][j];
        }
    }cout<<endl;
    cout<<"The matrix is : "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cout<<ele[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;
    cout<<"Setting zero in Upper triangular matrix"<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(i<j){
                cout<<0<<" ";
            }
            else{
                cout<<ele[i][j]<<" ";
            }
        }cout<<endl;
    }cout<<endl;
    return 0;
}
