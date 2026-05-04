// A
// A B 
// A B C 
// A B C D 
// A B C D E 
// A B C D E F 
#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
    for(int r=0;r<=n;r++){
        for(char c='A';c<='A'+r;c++){
            cout<<c<<" ";
        }
        
        cout<<endl;
    }

    return 0;
}