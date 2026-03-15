class Person:
    def __init__(self):
        self.name = ""
        self.age = 0

    def say_hello(self):
        print(f"Hi, I'm {self.name} and I'm {self.age} years old.")
        if (self.age >= 18):
            print(f"{self.name} is an adult. ")
        else:
            print(f"{self.name} is not an adult. ")
               
    def Birthday(self):
        self.age += 1
        print(f"¡Happy Birthday {self.name}!")
        print(f"{self.name} Has turned {self.age}")


def main():
    p1 = Person()
    p1.name = "Ana"
    p1.age = 17
    p1.say_hello()

    p2 = Person()
    p2.name = "Daniel"
    p2.age = 11
    p2.say_hello()

    print("---Test---")
    p1.Birthday()
    p1.say_hello()


if __name__ == "__main__":
    main()