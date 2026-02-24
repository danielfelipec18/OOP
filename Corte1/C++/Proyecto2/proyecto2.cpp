#include <iostream>
#include <string>
using namespace std;

class Persona {
public:
   string nombre;
   int edad;

   void saludar(){
      cout <<"Hola, soy " << nombre << " y tengo "<< edad << " años.\n";
   }
};

int main() {

   Persona p1;
   p1.nombre ="Daniel";
   p1.edad = 18;
   p1.saludar();  

   Persona p2;
   p2.nombre ="Samuel";
   p2.edad = 13;
   p2.saludar();
  return 0;
}
