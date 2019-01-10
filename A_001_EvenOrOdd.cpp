#include <iostream> // هذه المكتبة تحتوي على الأوامر الأساسية للإدخال والإخراج

/**
 * Problem 1: Even or Odd
This program asks the user to enter a number and prints whether the number is "Even" or "Odd".
*/

int main() {
    int number; // هذي المتغير اللي راح يحتوي الرقم اللي يدخله المستخدم
    std::cout << "Enter a number: ";
    std::cin >> number; // هنا نقرأ الرقم اللي يدخله المستخدم

    // هنا نستخدم العملية الرياضية modulus operator (%)
    // modulus operator: يعطينا الباقي من القسمة
    // لمعرفة إذا كان الرقم زوجي أو فردي
    if (number % 2 == 0) { // إذا كان الباقي يساوي صفر
        std::cout << "The number is Even." << std::endl;
    } else {
        std::cout << "The number is Odd." << std::endl;
    }
    return 0;
}
