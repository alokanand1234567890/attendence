import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        boolean running = true;

        System.out.println("Welcome to Basic Calculator!");
        System.out.println("Available operations: +, -, *, /");
        System.out.println("Enter 'q' to quit");

        while (running) {
            System.out.print("\nEnter first number: ");
            String input1 = scanner.next();

            if (input1.equalsIgnoreCase("q")) {
                running = false;
                continue;
            }

            double num1;
            try {
                num1 = Double.parseDouble(input1);
            } catch (NumberFormatException e) {
                System.out.println("Invalid input! Please enter a number.");
                continue;
            }

            System.out.print("Enter operation (+, -, *, /): ");
            String operation = scanner.next();

            if (operation.equalsIgnoreCase("q")) {
                running = false;
                continue;
            }

            if (!operation.equals("+") && !operation.equals("-") &&
                    !operation.equals("*") && !operation.equals("/")) {
                System.out.println("Invalid operation! Please use +, -, *, or /");
                continue;
            }

            System.out.print("Enter second number: ");
            String input2 = scanner.next();

            if (input2.equalsIgnoreCase("q")) {
                running = false;
                continue;
            }

            double num2;
            try {
                num2 = Double.parseDouble(input2);
            } catch (NumberFormatException e) {
                System.out.println("Invalid input! Please enter a number.");
                continue;
            }

            double result = 0;
            boolean validOperation = true;

            if (operation.equals("+")) {
                result = num1 + num2;
            } else if (operation.equals("-")) {
                result = num1 - num2;
            } else if (operation.equals("*")) {
                result = num1 * num2;
            } else if (operation.equals("/")) {
                if (num2 == 0) {
                    System.out.println("Error: Division by zero!");
                    validOperation = false;
                } else {
                    result = num1 / num2;
                }
            }

            if (validOperation) {
                System.out.printf("Result: %.2f %s %.2f = %.2f%n", num1, operation, num2, result);
            }
        }

        System.out.println("Thank you for using the calculator!");
        scanner.close();
    }
}