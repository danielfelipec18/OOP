
import java.util.Scanner;

public class Appr {

    public static void main(String[] args) {
        Numero numero1 = new Numero();
        Numero numero2 = new Numero();
        Numero producto = new Numero();
        Scanner teclado = new Scanner(System.in);

        Vista vista = new Vista();
        vista.mostrartitulo();
        vista.mostrarnumero();

        int n1 = teclado.nextInt();
        numero1.setNumero(n1);
        vista.mostrarnumero();
        int n2 = teclado.nextInt();
        numero2.setNumero(n2);

        int s = numero1.getNumero() * numero2.getNumero();
        producto.setNumero(s);
        vista.mostrarsalida(producto);
        teclado.close();

    }
}
