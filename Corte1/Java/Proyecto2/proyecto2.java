public class Persona {
    String nombre;
    int edad;

    void saludar() {
        System.out.println("Hola, soy " + nombre + " y tengo " + edad + " años.");
    }

    public static void main(String[] args) {
        Persona p1 = new Persona();
        p1.nombre = "Daniel";
        p1.edad = 18;
        p1.saludar();

        Persona p2 = new Persona();
        p2.nombre = "Samuel";
        p2.edad = 13;
        p2.saludar();
    }
}
