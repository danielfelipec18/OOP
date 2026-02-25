package Division;

import java.util.Scanner;

public class appd {

    public static void main(String[] args) {
        numerod numero1 = new numerod();
        numerod numero2 = new numerod();
        numerod producto = new numerod();
        Scanner teclado = new Scanner(System.in);

        vistad vista = new vistad();
        vista.mostrartitulo();
        vista.mostrarnumero();

        int n1 = teclado.nextInt();
        numero1.setNumero(n1);
        vista.mostrarnumero();
        int n2 = teclado.nextInt();
        numero2.setNumero(n2);

        int s = numero1.getNumero() / numero2.getNumero();
        producto.setNumero(s);
        vista.mostrarsalida(producto);
        teclado.close();

    }
}