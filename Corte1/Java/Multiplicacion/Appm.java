
import java.util.Scanner;

public class Appm {

    public static void main(String[] args) {
        numerom numero1 = new numerom();
        numerom numero2 = new numerom();
        numerom producto = new numerom();
        Scanner teclado = new Scanner(System.in);

        Vistam vista = new Vistam();
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
