public class Proyecto2 {
    public static void main(String[] args) {
        String base = "Hola,soy %s y tengo %s.";
        
        String persona1 = String.format(base, "Daniel", "17");
        String persona2 = String.format(base, "Felix", "48");
        String persona3 = String.format(base, "Danna", "23");

        System.out.println(persona1);
        System.out.println(persona2);
        System.out.println(persona3);
    }
}
