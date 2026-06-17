// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 
// 0 1 0 1 0 1 
#include <iostream>
using namespace std;

int main() {
   int n;
   cin>>n;
   int start=1;
    for(int r=0;r<n;r++){
        if(r%2==0) start=1;
        else start=0;
        for(int c=0;c<=r;c++){
            cout<<start<<" ";
            start=1-start;
        }
        
        cout<<endl;
    }

    return 0;
}