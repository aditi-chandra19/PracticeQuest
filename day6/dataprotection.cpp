#include <iostream>
using namespace std;
class stu{
    int age;
    public:
      int getAge(){//getter
        return this -> age;
      }
      void setAge(int Age){//setter
        if(age>=18) this -> age=age;
      }
};
class details{
    int marks;
    public:
    int getMarks(){//getter
        return this -> marks =marks;
    }
    void setmarks(int marks){//setter
        if (marks>=0 && marks<=100) this -> marks=marks;
    }
};
int main(){}