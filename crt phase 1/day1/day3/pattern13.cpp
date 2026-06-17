// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 

#include <iostream>
using namespace std;

int main() {
    int n,num=1;
    cin>>n;
    for(int r=1;r<=n;r++){
        for(int c=1;c<=r;c++){
            cout<<num<<" ";
            num=num+1;
        }
        
        cout<<endl;
    }

    return 0;
}