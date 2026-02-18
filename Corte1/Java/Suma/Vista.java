public class Vista {

    public Vista() {
    }
    
    public void mostrartitulo(){
        System.out.println("Programa sumar dos numeros enteros");
    }

    public void mostrarnumero(){
        System.out.println("Digite numero");
    }

    public void mostrarsalida(Numero suma){
        System.out.println(suma.getNumero());
    }
}
