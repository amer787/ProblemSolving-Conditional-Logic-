#include <iostream>

/**
 * Problem 4: Simple Calculator
 * This program asks the user to enter two numbers
 *  and an operator (+, -, *, /) and performs the operation.
 */

int main() {
    double num1, num2; // هنا المتغيرات اللي راح تحتوي الأرقام اللي يدخلها المستخدم
    char op; // هنا المتغير اللي راح يحتوي العملية الحسابية اللي يدخلها المستخدم
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2; // هنا نقرأ الأرقام اللي يدخلها المستخدم
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op; // هنا نقرأ العملية الحسابية اللي يدخلها المستخدم

    // هنا نستخدم العمليات الرياضية لعمل العمليات الحسابية
    // نستخدم العمليات الرياضية لأن الأرقام هي أرقام
    switch (op) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 == 0) {
                std::cout << "Error! Division by zero." << std::endl;
            } else {
                std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
            }
            break;
        default:
            std::cout << "Error! Invalid operator." << std::endl;
    }
    return 0;
}