#include <iostream>
using namespace std;

class bankAccount{ // public class bankAccount{}
    
    int balance;
    public:
    string name;
    void withdraw(){
        cout<<"hii"<<" "<<name<<endl;
    }
    void deposit(){
        cout<<"hii"<<" "<<name<<endl;
    }
    int checkbalance(){
        cout<<"hii"<<" "<<name<<endl;
    }
};
int main(){
    bankAccount s1;
    s1.withdraw();
    s1.deposit();
    s1.checkbalance();
    
}