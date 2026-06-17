#include <iostream>
using namespace std;
class Animal{ //abstract class
    public:
    void eat() {
        cout<<"\neating\n";
    }
   virtual void speak()=0; //virtual funciton pure
    
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
class cow : public Animal{
    public:
    void speak(){cout<<"meow\n";}
};
int main() {
    
   dog d;
//    Animal m; //object of abstract class type "Animal" is not allowed
cow c;
d.eat();
d.speak();
c.eat();
c.speak();

 
}