#include <iostream>

/**
 * Problem 10: Multiplication * or Addition +
 * Write a program that asks the user to enter two numbers
 *  and prints their product if both numbers are greater than 10,
 *  and their sum otherwise.
 */

int main() {
    double num1, num2; // هنا المتغيرات اللي راح تحتوي الأرقام اللي يدخلها المستخدم
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2; // هنا نقرأ الأرقام اللي يدخلها المستخدم

    // هنا نستخدم العمليات الرياضية لعمل العمليات الحسابية
    if (num1 > 10 && num2 > 10) {
        std::cout << "The product is " << num1 * num2 << std::endl;
    } else {
        std::cout << "The sum is " << num1 + num2 << std::endl;
    }
    return 0;
}
