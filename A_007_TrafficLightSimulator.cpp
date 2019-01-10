#include <iostream>

/**
 * Problem 7: Traffic Light Simulator
 * Write a program that asks the user to enter the color of the traffic light
 *  and prints "Stop" if the color is red, "Slow down" if the color is yellow, 
 *  and "Go" if the color is green.
 */

int main() {
    std::string color; // هنا المتغير اللي راح يحتوي لون إشارة المرور اللي يدخلها المستخدم
    std::cout << "Enter the color of the traffic light: ";
    std::cin >> color; // هنا نقرأ لون إشارة المرور اللي يدخلها المستخدم

    // هنا نستخدم العمليات الرياضية لمعرفة إذا كان لون إشارة المرور أحمر أو أصفر أو أخضر
    // نستخدم العمليات الرياضية لأن لون إشارة المرور هو نص
    if (color == "red") {
        std::cout << "Stop" << std::endl;
    } else if (color == "yellow") {
        std::cout << "Slow down" << std::endl;
    } else if (color == "green") {
        std::cout << "Go" << std::endl;
    } else {
        std::cout << "Error! Invalid color." << std::endl;
    }
    return 0;
}

