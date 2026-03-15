#include <iostream>
#include <string>
using namespace std;
class Person {
public:
string name; // attribute
int age; // attribute
void sayHello() {
cout << "Hi, I'm " << name << " and I'm " << age << " years old.\n";
if (age >= 18) {
	cout<< name << " Is an adult\n";
            }
	else {
		cout<< name << " Is not an adult\n";
            }
}

void Birthday() {
	age++;
	cout << "¡Happy Birthday " << name << "!\n";
	cout << name << " Has Turned "<< age << " Years\n";
}

};
int main() {
	Person p1;
	p1.name = "Ana";
	p1.age = 17;
	p1.sayHello();

	Person p2;
	p2.name = "Daniel";
	p2.age = 11;
	p2.sayHello();

cout<<"---Test---\n";
p1.Birthday();
p1.sayHello();

return 0;
}
