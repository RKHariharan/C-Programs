
package placement_training;

import java.util.Scanner;

public class ReadInteger {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter number1: ");
        double number1 = scanner.nextDouble();
        System.out.print("Enter number2: ");
        double number2 = scanner.nextDouble();
        double average = (number1 + number2) / 2;
        System.out.printf("The average of %.2f and %.2f is: %.2f%n", number1, number2, average);
        scanner.close();
    }
}
