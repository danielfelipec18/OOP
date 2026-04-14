MAX_ESTUDIANTES = 30
NUM_NOTAS = 3


# VALIDACIÓN DE DATOS

def leer_entero():
    while True:
        try:
            valor = int(input())
            return valor
        except:
            print("Entrada invalida. Ingrese un numero: ", end="")


def leer_float():
    while True:
        try:
            valor = float(input())
            return valor
        except:
            print("Entrada invalida. Ingrese un numero: ", end="")


def leer_texto():
    while True:
        texto = input()
        if texto.strip() == "":
            print("No puede estar vacio. Intente de nuevo: ", end="")
        else:
            return texto


# ESTUDIANTE

class Estudiante:
    def __init__(self, codigo=0, nombre="", edad=0):
        self.codigo = codigo
        self.nombre = nombre
        self.edad = edad

    def get_codigo(self):
        return self.codigo

    def get_nombre(self):
        return self.nombre

    def get_edad(self):
        return self.edad

    def mostrar(self):
        print(f"Codigo: {self.codigo}")
        print(f"Nombre: {self.nombre}")
        print(f"Edad: {self.edad}")


# SISTEMA

class Sistema:
    def __init__(self):
        self.estudiantes = []
        self.notas = [[0 for _ in range(NUM_NOTAS)] for _ in range(MAX_ESTUDIANTES)]
        self.contador = 0

    def buscar_indice(self, codigo):
        for i in range(self.contador):
            if self.estudiantes[i].get_codigo() == codigo:
                return i
        return -1

    def registrar_estudiante(self):
        if self.contador >= MAX_ESTUDIANTES:
            print("No hay espacio.")
            return

        print("Codigo: ", end="")
        codigo = leer_entero()

        if self.buscar_indice(codigo) != -1:
            print("El codigo ya existe.")
            return

        print("Nombre: ", end="")
        nombre = leer_texto()

        while True:
            print("Edad: ", end="")
            edad = leer_entero()
            if edad > 0:
                break
            print("Edad invalida.")

        estudiante = Estudiante(codigo, nombre, edad)
        self.estudiantes.append(estudiante)
        self.contador += 1

        print("Estudiante registrado.")

    def mostrar_estudiantes(self):
        if self.contador == 0:
            print("No hay estudiantes.")
            return

        for i in range(self.contador):
            print(f"\nEstudiante {i + 1}:")
            self.estudiantes[i].mostrar()

    def buscar_estudiante(self):
        print("Codigo: ", end="")
        codigo = leer_entero()

        pos = self.buscar_indice(codigo)

        if pos != -1:
            self.estudiantes[pos].mostrar()
        else:
            print("No encontrado.")

    def asignar_notas(self):
        print("Codigo: ", end="")
        codigo = leer_entero()

        pos = self.buscar_indice(codigo)

        if pos != -1:
            for i in range(NUM_NOTAS):
                while True:
                    print(f"Nota {i + 1} (0 - 5): ", end="")
                    nota = leer_float()
                    if 0 <= nota <= 5:
                        break
                    print("Nota invalida.")
                self.notas[pos][i] = nota
            print("Notas guardadas.")
        else:
            print("No encontrado.")

    def mostrar_promedio(self):
        print("Codigo: ", end="")
        codigo = leer_entero()

        pos = self.buscar_indice(codigo)

        if pos != -1:
            suma = sum(self.notas[pos])
            print("Promedio:", suma / NUM_NOTAS)
        else:
            print("No encontrado.")

    def mostrar_matriz(self):
        if self.contador == 0:
            print("No hay datos.")
            return

        for i in range(self.contador):
            print(self.estudiantes[i].get_codigo(), end=": ")
            for j in range(NUM_NOTAS):
                print(self.notas[i][j], end=" ")
            print()


# VISTA

class Vista:
    @staticmethod
    def mostrar_menu():
        print("\n=== MENU ===")
        print("1. Registrar estudiante")
        print("2. Mostrar estudiantes")
        print("3. Buscar estudiante")
        print("4. Asignar notas")
        print("5. Promedio")
        print("6. Mostrar notas")
        print("7. Salir")
        print("Opcion: ", end="")


# MAIN

def main():
    sistema = Sistema()

    print("=== BIENVENIDO AL SISTEMA ===")

    while True:
        Vista.mostrar_menu()
        opcion = leer_entero()

        if opcion == 1:
            sistema.registrar_estudiante()
        elif opcion == 2:
            sistema.mostrar_estudiantes()
        elif opcion == 3:
            sistema.buscar_estudiante()
        elif opcion == 4:
            sistema.asignar_notas()
        elif opcion == 5:
            sistema.mostrar_promedio()
        elif opcion == 6:
            sistema.mostrar_matriz()
        elif opcion == 7:
            print("Saliendo...")
            break
        else:
            print("Opcion invalida")


if __name__ == "__main__":
    main()
