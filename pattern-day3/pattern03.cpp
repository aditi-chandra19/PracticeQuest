// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
#include <iostream>
using namespace std;

int main() {
  
    for(int r=1;r<=5;r++){
        for(int c=1;c<=r;c++){
            cout<<c<<" ";
        }
        
        cout<<endl;
    }

    return 0;
}