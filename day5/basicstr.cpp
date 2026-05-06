#include <iostream>
using namespace std;

class stu{ // public class stu{}
    public:
    int roll;
    string name;
    // stu(){} default constructor
    // parameterized constructor 
    stu(int a , string b){
        this->roll=a;
        this->name=b;
    }

    //destructor
    // ~stu(){}
    void greet(){
        cout<<"hii"<<" "<<name<<" "<<roll;
    }
};
int main(){
    stu s1(22 , "Aditi");
    // s1.roll;
    // s1.name="Aditi";
    s1.greet();
}