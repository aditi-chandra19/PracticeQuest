#include <iostream>
using namespace std;

class Shape {
   public:
    Shape() {//constructor
        cout << "constructor created" << endl;
    }

    virtual float area() = 0;//virtual function coz we are using abstract class
    virtual float perimeter() = 0;

    virtual ~Shape() {//destructor
        cout << "constructor destroyed" << endl;
    }
};

class Circle : public Shape {
    float radius;

   public:
    Circle(float r)  {this -> radius=r;}

    float area() {
        return 3.14 * radius * radius;
    }

    float perimeter() {
        return 2 * 3.14 * radius;
    }
};

class Square : public Shape {
    float side;

   public:
    Square(float s)  {this -> side=s;}

    float area() {
        return side * side;
    }

    float perimeter() {
        return 4 * side;
    }
};

class Rectangle : public Shape {
    float length;
    float breadth;

   public:
    Rectangle(float l, float b)  {
        this -> length=l;
        this -> breadth=b;
    }

    float area() {
        return length * breadth;
    }

    float perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    int choice;

    cout << "1. Circle" << endl;
    cout << "2. Square" << endl;
    cout << "3. Rectangle" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            float radius;
            cout << "Enter radius: ";
            cin >> radius;

            Circle c(radius);
            Shape& shape = c;
            cout << "Area = " << shape.area() << endl;
            cout << "Perimeter = " << shape.perimeter() << endl;
            break;
        }

        case 2: {
            float side;
            cout << "Enter side: ";
            cin >> side;

            Square s(side);
            Shape& shape = s;
            cout << "Area = " << shape.area() << endl;
            cout << "Perimeter = " << shape.perimeter() << endl;
            break;
        }

        case 3: {
            float length, breadth;
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter breadth: ";
            cin >> breadth;

            Rectangle r(length, breadth);
            Shape& shape = r;
            cout << "Area = " << shape.area() << endl;
            cout << "Perimeter = " << shape.perimeter() << endl;
            break;
        }

        default:
            cout << "Invalid choice" << endl;
    }

}
