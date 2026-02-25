public class Vista {

    public void mostrartitulo() {
        System.out.println("Programa sumar dos numeros enteros");
    }


    public void escribirNumero() {
        System.out.print("Escriba un numero entero");
    }

     public void escribirSalida(Numero resultado1) {
        System.out.println("\nLa suma es " +resultado1.getNumero());
    }

    public void mostrarMenu() {
        System.out.println("\n--- Menu de suma---");
        System.out.println("1. Realizar suma");
        System.out.println("2. Salir");
        System.out.println("Seleccione una opcion");
    }

    public void salirPrograma() {
        System.out.println("Saliendo del programa");
    }

    public void mostrarDefault() {
        System.out.println("Opcion no valida. Por favor, intente de nuevo. Solo 1 o 2");
    }

   
}
