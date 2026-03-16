#include <iostream>
using namespace std;

class Stats {
public:

    static int sum(const int a[], int n) {
        int total = 0;
        for (int i = 0; i < n; i++) {
            total += a[i];
        }
        return total;
    }

    static double average(const int a[], int n) {
        int total = sum(a, n);
        return (double)total / n;
    }

    static int maxValue(const int a[], int n) {
        int max = a[0];
        for (int i = 0; i < n; i++) {
            if (a[i] > max) {
                max = a[i];
            }
        }
        return max;
    }

    static int countPassing(const int a[], int n, int threshold) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] >= threshold) {
                count++;
            }
        }
        return count;
    }
};

int main() {

    int grades[] = {80, 75, 90, 60, 95, 88, 70, 92, 85, 78}; 

    int n = sizeof(grades) / sizeof(grades[0]);

    int total = Stats::sum(grades, n);
    double avg = Stats::average(grades, n);
    int max = Stats::maxValue(grades, n);
    int passing = Stats::countPassing(grades, n, 70);

    cout << "Sum: " << total << "\n";
    cout << "Average: " << avg << "\n";
    cout << "Max value: " << max << "\n";
    cout << "Grades >= 70: " << passing << "\n";

    return 0;
}
