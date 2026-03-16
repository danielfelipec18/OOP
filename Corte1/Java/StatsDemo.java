public class StatsDemo {

    static class Stats {

        public static int sum(int[] a) {
            int total = 0;
            for (int x : a) {
                total += x;
            }
            return total;
        }

        public static double average(int[] a) {
            int total = sum(a);
            return (double) total / a.length;
        }

        public static int maxValue(int[] a) {
            int max = a[0];
            for (int x : a) {
                if (x > max) {
                    max = x;
                }
            }
            return max;
        }

        public static int countPassing(int[] a, int threshold) {
            int count = 0;
            for (int x : a) {
                if (x >= threshold) {
                    count++;
                }
            }
            return count;
        }
    }

    public static void main(String[] args) {

        int[] grades = { 80, 75, 90, 60, 95, 88, 70, 92, 85, 78 };

        int total = Stats.sum(grades);
        double avg = Stats.average(grades);
        int max = Stats.maxValue(grades);
        int passing = Stats.countPassing(grades, 70);

        System.out.println("Sum: " + total);
        System.out.println("Average: " + avg);
        System.out.println("Max value: " + max);
        System.out.println("Grades ≥ 70: " + passing);
    }
}