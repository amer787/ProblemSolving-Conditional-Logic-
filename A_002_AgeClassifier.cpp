#include <iostream>

/** 
 * Problem 2: Age Classifier
This program asks the user for
 their age and classifies them as "Child" (under 13), "Teen" (13-19), or "Adult" (20 and above).
*/

int main() {
    int age; // هنا المتغير اللي راح يحتوي العمر اللي يدخله المستخدم
    std::cout << "Enter your age: ";
    std::cin >> age; // هنا نقرأ العمر اللي يدخله المستخدم

    // هنا نستخدم العمليات الرياضية لمعرفة إذا كان العمر طفل أو مراهق أو بالغ
    // نستخدم العمليات الرياضية لأن العمر هو رقم
    
    if (age < 13) {
        std::cout << "You are a Child." << std::endl;
    } else if (age >= 13 && age <= 19) { // هنا نستخدم العملية الرياضية && للتأكد من أن العمر بين 13 و 19
        std::cout << "You are a Teen." << std::endl;
    } else {
        std::cout << "You are an Adult." << std::endl;
    }
    return 0;
}
