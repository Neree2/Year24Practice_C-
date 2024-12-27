#include <iostream>

using namespace std;

int i=1;

void f(int n){
    cout<<n<<" ";
    if(i<=n+1){
        f(n);
        i++;
    }
}

int main()
{
    cout << "" << endl;
    int n;
    cin>>n;
    f(n+1);
    return 0;
}
