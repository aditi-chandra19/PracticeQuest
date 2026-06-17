// A B C D E F G 
// A B C D E F 
// A B C D E 
// A B C D 
// A B C 
// A B 
// A 

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int r=0;r<=n;r++){
        for(char c='A';c<='A'+n-r;c++){
            cout<<c<<" ";
        }
        
        cout<<endl;
    }

    return 0;
}