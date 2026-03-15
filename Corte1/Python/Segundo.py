class Rectangle:
    def __init__(self, b, h):
        self.base = b
        self.height = h

    def area(self):
        return self.base * self.height
    
    def perimeter(self):
        return (self.base + self.height)*2
    
    def square(self):
        if self.base == self.height:
            return True
        else:
            return False

def main():
    r1 = Rectangle(3.0, 2.0)
    print("Base:", r1.base)
    print("Height:", r1.height)
    print("Area:", r1.area())
    print("--------")

    r2 = Rectangle(5.0, 4.0)
    print("Base:", r2.base)
    print("Height:", r2.height)
    print("Area:", r2.area())
    print("--------")

    r3 = Rectangle(5.0, 5.0)
    print("Base:", r3.base)
    print("Height:", r3.height)
    print("Area:", r3.area())
    print("--------")

    print("---Test---")
    print("r2 area: ", r2.area())
    print("r1 perimeter: ", r1.perimeter())
    print("r3 test: ", r3.square())


if __name__ == "__main__":
    main()