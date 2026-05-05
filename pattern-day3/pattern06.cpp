// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int r=1;r<=n;r++){
        for(int c=1;c<=n-r;c++){
            cout<<c<<" ";
        }
        
        cout<<endl;
    }

    return 0;
}