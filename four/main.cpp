#include <iostream>

using namespace std;

int c=0;
int s(int j){
    if(j==0){
        return 0;
    }
    return j+s(j-1);
    c++;
}

int main()
{
    int i,j
    cout << " " ;
    cin>>i>>j;
    cout<<c<<" "<<s(j)+i;
    return 0;
}
