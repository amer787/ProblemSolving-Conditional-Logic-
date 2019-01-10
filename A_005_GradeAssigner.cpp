#include <iostream>

/**
 * Problem 5: Grade Assigner
 * This program asks the user for their score and assigns them a grade based on the following table:
 *  90-100: A
 *  80-89: B
 *  70-79: C
 *  60-69: D
 *  0-59: F
 */

int main() {
    int score; // هنا المتغير اللي راح يحتوي الدرجة اللي يدخلها المستخدم
    std::cout << "Enter your score: ";
    std::cin >> score; // هنا نقرأ الدرجة اللي يدخلها المستخدم

    // هنا نستخدم العمليات الرياضية لمعرفة الدرجة اللي راح يحصل عليها المستخدم
    // نستخدم العمليات الرياضية لأن الدرجة هي رقم
    if (score >= 90 && score <= 100) {
        std::cout << "Your grade is A." << std::endl;
    } else if (score >= 80 && score <= 89) {
        std::cout << "Your grade is B." << std::endl;
    } else if (score >= 70 && score <= 79) {
        std::cout << "Your grade is C." << std::endl;
    } else if (score >= 60 && score <= 69) {
        std::cout << "Your grade is D." << std::endl;
    } else if (score >= 0 && score <= 59) {
        std::cout << "Your grade is F." << std::endl;
    } else {
        std::cout << "Invalid score." << std::endl;
    }
    return 0;
}