#include <iostream>
using namespace std;
class Rectangle {
public:
double base;
double height;
Rectangle(double b, double h) {
base = b;
height = h;
}

double area() {
return base * height;
}

double perimeter() {
return (base + height)*2;
}

bool square() {
if (base==height){
	return true;
}
else{
	return false;
}
}

};
int main() {
Rectangle r1(3.0, 2.0);
cout << "Base: " << r1.base << "\n";
cout << "Height: " << r1.height << "\n";
cout << "Area: " << r1.area() << "\n";

Rectangle r2(5.0, 4.0);
cout << "Base: " << r2.base << "\n";
cout << "Height: " << r2.height << "\n";
cout << "Area: " << r2.area() << "\n";

Rectangle r3(5.0, 5.0);
cout << "Base: " << r3.base << "\n";
cout << "Height: " << r3.height << "\n";
cout << "Area: " << r3.area() << "\n";

cout<<"---Test---\n";
cout<<"r2Area: " << r2.area()<<"\n";
cout<<"r1Perimeter: " << r2.perimeter()<<"\n";
cout<<"r3Test: " << r3.square()<<"\n";
return 0;
}
