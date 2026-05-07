#include <iostream>
using namespace std;
class Animal{
    public:
    void eat() {
        cout<<"\neating\n";
    }
    
};
class dog : public Animal{//dog inherited animal
    public:
        void speak(){
            cout<<"bark";
        }
    
};
class cat : public Animal{
    public:
    void scratch(){
        cout<<"scratches alot";
    }
};
int main() {
    dog d;
    cat c;
    d.eat();
    d.speak();
    c.eat();
    c.scratch();
}