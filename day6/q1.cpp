#include <iostream>
using namespace std;
class print{
    public:
    void show(int x){cout<<"int";}
    void show(long x){cout<<"long";}
};
int main(){
print p;
p.show('z');
}