class Stats:
    @staticmethod
    def sum(a):
        total = 0
        for x in a:
            total += x
        return total
        
    @staticmethod
    def average(a):
        total = Stats.sum(a)
        return total / len(a)

    @staticmethod
    def maxValue(a):
        max_val = a[0]
        for x in a:
            if x > max_val:
                max_val = x
        return max_val

    @staticmethod
    def countPassing(a, threshold):
        count = 0
        for x in a:
            if x >= threshold:
                count += 1
        return count


def main():
    grades = [80, 75, 90, 60, 95, 88, 70, 92, 85, 78]  

    total = Stats.sum(grades)
    avg = Stats.average(grades)
    maximum = Stats.maxValue(grades)
    passing = Stats.countPassing(grades, 70)

    print("Sum:", total)
    print("Average:", avg)
    print("Max value:", maximum)
    print("Grades ≥ 70:", passing)


if __name__ == "__main__":
    main()