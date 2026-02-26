import java.util.Scanner;

public class Array{
    public int [] data;
    public int n;

    public Array(int n) {
        this.n = n;
        this.data = new int[n];
    }

    public void print(String name){
        System.out.print (name + "=[");
        for (int i = 0; i < n ; i++){
            System.out.print (data[i]);
                if (i < n-1) System.out.print( ",");
        }
        System.out.print( "]");
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Tamaño n: ");
        int n = sc.nextInt();
        Array v = new Array(n);
        
        for (int i = 0; i < n ; i++){
            System.out.print("v [ " + i + " ]:");
                v.data[i] = sc.nextInt();
        }
        v.print("v");

        sc.close();
    }
}