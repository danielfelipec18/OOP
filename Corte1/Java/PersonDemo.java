package PersonDemo;

public class PersonDemo {
    static class Person {
        public String name;
        public int age;

        public void sayHello() {
            System.out.println("Hi, I'm " + name + " and I'm " + age + " years old.");

            if (age >= 18) {
                System.out.println(name + " is an adult.");
            } else {
                System.out.println(name + " is not an adult.");
            }
        }

        public void Birthday() {
            age++;
            System.out.println("¡Happy Birthday " + name + "!");
            System.out.println(name + " has turned " + age);
        }
    }

    public static void main(String[] args) {
        Person p1 = new Person();
        p1.name = "Ana";
        p1.age = 17;
        p1.sayHello();

        Person p2 = new Person();
        p2.name = "Daniel";
        p2.age = 11;
        p2.sayHello();

        System.out.println("---Test---");

        p1.Birthday();
        p1.sayHello();

    }
}
