// 1                 1 
// 1 2             2 1 
// 1 2 3         3 2 1 
// 1 2 3 4     4 3 2 1 
// 1 2 3 4 5 5 4 3 2 1 
#include <iostream>
using namespace std;

int main() {
    int n=5;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<i+1;j++){
            cout<<j<<" ";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}