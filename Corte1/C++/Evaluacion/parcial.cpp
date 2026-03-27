#include <iostream>
#include <string>
using namespace std;

const int MAX_ESTUDIANTES = 30;
const int NUM_NOTAS = 3;


// VALIDACION DATOS

int leerEntero() {
    int valor;
    while (true) {
        cin >> valor;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Entrada invalida. Ingrese un numero: ";
        } else {
            cin.ignore(1000, '\n');
            return valor;
        }
    }
}

float leerFloat() {
    float valor;
    while (true) {
        cin >> valor;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Entrada invalida. Ingrese un numero: ";
        } else {
            cin.ignore(1000, '\n');
            return valor;
        }
    }
}

string leerTexto() {
    string texto;
    getline(cin, texto);

    while (texto.empty()) {
        cout << "No puede estar vacio. Intente de nuevo: ";
        getline(cin, texto);
    }

    return texto;
}


// ESTUDIANTE

class Estudiante {
private:
    int codigo;
    string nombre;
    int edad;

public:
    Estudiante() {
        codigo = 0;
        nombre = "";
        edad = 0;
    }

    Estudiante(int c, string n, int e) {
        codigo = c;
        nombre = n;
        edad = e;
    }

    int getCodigo() { 
	return codigo; }
    string getNombre() { 
	return nombre; }
    int getEdad() { 
	return edad; }

    void mostrar() {
        cout << "Codigo: " << codigo << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
    }
};


// SISTEMA

class Sistema {
private:
    Estudiante estudiantes[MAX_ESTUDIANTES];
    float notas[MAX_ESTUDIANTES][NUM_NOTAS];
    int contador;

public:
    Sistema() {
        contador = 0;

        for (int f = 0; f < MAX_ESTUDIANTES; f++) {
            for (int e = 0; e < NUM_NOTAS; e++) {
                notas[f][e] = 0;
            }
        }
    }

    int buscarIndice(int codigo) {
        for (int f = 0; f < contador; f++) {
            if (estudiantes[f].getCodigo() == codigo) {
                return f;
            }
        }
        return -1;
    }

    void registrarEstudiante() {
        if (contador >= MAX_ESTUDIANTES) {
            cout << "No hay espacio.\n";
            return;
        }

        int codigo, edad;
        string nombre;

        cout << "Codigo: ";
        codigo = leerEntero();

        // Validar codigo unico
        if (buscarIndice(codigo) != -1) {
            cout << "El codigo ya existe.\n";
            return;
        }

        cout << "Nombre: ";
        nombre = leerTexto();

        do {
            cout << "Edad: ";
            edad = leerEntero();
            if (edad <= 0) {
                cout << "Edad invalida.\n";
            }
        } while (edad <= 0);

        estudiantes[contador] = Estudiante(codigo, nombre, edad);
        contador++;

        cout << "Estudiante registrado.\n";
    }

    void mostrarEstudiantes() {
        if (contador == 0) {
            cout << "No hay estudiantes.\n";
            return;
        }

        for (int f = 0; f < contador; f++) {
            cout << "\nEstudiante " << f + 1 << ":\n";
            estudiantes[f].mostrar();
        }
    }

    void buscarEstudiante() {
        int codigo;
        cout << "Codigo: ";
        codigo = leerEntero();

        int pos = buscarIndice(codigo);

        if (pos != -1) {
            estudiantes[pos].mostrar();
        } else {
            cout << "No encontrado.\n";
        }
    }

    void asignarNotas() {
        int codigo;
        cout << "Codigo: ";
        codigo = leerEntero();

        int pos = buscarIndice(codigo);

        if (pos != -1) {
            for (int f = 0; f < NUM_NOTAS; f++) {
                float nota;
                do {
                    cout << "Nota " << f + 1 << " (0 - 5): ";
                    nota = leerFloat();

                    if (nota < 0 || nota > 5) {
                        cout << "Nota invalida.\n";
                    }
                } while (nota < 0 || nota > 5);

                notas[pos][f] = nota;
            }
            cout << "Notas guardadas.\n";
        } else {
            cout << "No encontrado.\n";
        }
    }

    void mostrarPromedio() {
        int codigo;
        cout << "Codigo: ";
        codigo = leerEntero();

        int pos = buscarIndice(codigo);

        if (pos != -1) {
            float suma = 0;

            for (int f = 0; f < NUM_NOTAS; f++) {
                suma += notas[pos][f];
            }

            cout << "Promedio: " << suma / NUM_NOTAS << endl;
        } else {
            cout << "No encontrado.\n";
        }
    }

    void mostrarMatriz() {
        if (contador == 0) {
            cout << "No hay datos.\n";
            return;
        }

        for (int f = 0; f < contador; f++) {
            cout << estudiantes[f].getCodigo() << ": ";
            for (int e = 0; e < NUM_NOTAS; e++) {
                cout << notas[f][e] << " ";
            }
            cout << endl;
        }
    }
};


// VISTA

class Vista {
public:
    static void mostrarMenu() {
        cout << "\n=== MENU ===\n";
        cout << "1. Registrar estudiante\n";
        cout << "2. Mostrar estudiantes\n";
        cout << "3. Buscar estudiante\n";
        cout << "4. Asignar notas\n";
        cout << "5. Promedio\n";
        cout << "6. Mostrar notas\n";
        cout << "7. Salir\n";
        cout << "Opcion: ";
    }
};


// MAIN

int main() {
    Sistema sistema;
    int opcion;

    cout << "=== BIENVENIDO AL SISTEMA ===\n";

    do {
        Vista::mostrarMenu();
        opcion = leerEntero();

        switch (opcion) {
            case 1: sistema.registrarEstudiante(); break;
            case 2: sistema.mostrarEstudiantes(); break;
            case 3: sistema.buscarEstudiante(); break;
            case 4: sistema.asignarNotas(); break;
            case 5: sistema.mostrarPromedio(); break;
            case 6: sistema.mostrarMatriz(); break;
            case 7: cout << "Saliendo...\n"; break;
            default: cout << "Opcion invalida\n";
        }

    } while (opcion != 7);

    return 0;
}
