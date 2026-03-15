package RectangleDemo;

public class RectangleDemo {
    static class Rectangle {
        public double base;
        public double height;

        public Rectangle(double b, double h) {
            base = b;
            height = h;
        }

        public double area() {
            return base * height;
        }

        public double perimeter() {
            return (base + height) * 2;
        }

        public boolean square() {
            if (base == height) {
                return true;
            }
            return false;
        }
    }

    public static void main(String[] args) {
        Rectangle r1 = new Rectangle(3.0, 2.0);
        System.out.println("Base: " + r1.base);
        System.out.println("Height: " + r1.height);
        System.out.println("Area: " + r1.area());

        Rectangle r2 = new Rectangle(5.0, 4.0);
        System.out.println("Base: " + r2.base);
        System.out.println("Height: " + r2.height);
        System.out.println("Area: " + r2.area());

        Rectangle r3 = new Rectangle(5.0, 5.0);
        System.out.println("Base: " + r3.base);
        System.out.println("Height: " + r3.height);
        System.out.println("Area: " + r3.area());

        System.out.println("---Test---");
        System.out.println("r2Area: " + r2.area());
        System.out.println("r1Perimeter: " + r1.perimeter());
        System.out.println("r3Test: " + r3.square());
    }
}