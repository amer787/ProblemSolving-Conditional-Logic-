#include <iostream>

/**
 * Problem 6: Temperature Advice
 * Write a program that asks the user to enter the current temperature. 
 * If it's above 30 degrees, print "It's hot outside!",
 *  if it's below 10 degrees, print "It's cold outside!",
 * otherwise print "Enjoy the weather!".
 */

int main() {
    double temperature; // هنا المتغير اللي راح يحتوي درجة الحرارة اللي يدخلها المستخدم
    std::cout << "Enter the current temperature: ";
    std::cin >> temperature; // هنا نقرأ درجة الحرارة اللي يدخلها المستخدم

    // هنا نستخدم العمليات الرياضية لمعرفة إذا كانت درجة الحرارة عالية أو منخفضة
    // نستخدم العمليات الرياضية لأن درجة الحرارة هي رقم
    if (temperature > 30) {
        std::cout << "It's hot outside!" << std::endl;
    } else if (temperature < 10) {
        std::cout << "It's cold outside!" << std::endl;
    } else {
        std::cout << "Enjoy the weather!" << std::endl;
    }
    return 0;
}