#include <iostream>

/**
 * Problem 8: Password Validator
 *Write a program that asks the user to enter a password and validates it based on the following criteria: at least 8 characters long and contains both letters and numbers.
  Print "Valid Password" or "Invalid Password" accordingly.
 */

int main() {
    std::string password; // هنا المتغير اللي راح يحتوي كلمة المرور اللي يدخلها المستخدم
    std::cout << "Enter a password: ";
    std::cin >> password; // هنا نقرأ كلمة المرور اللي يدخلها المستخدم

    // هنا نستخدم العمليات الرياضية لمعرفة إذا كانت كلمة المرور تحتوي على حروف وأرقام وأنها طولها 8 أو أكثر
    // نستخدم العمليات الرياضية لأن كلمة المرور هي نص
    bool hasLetter = false; // هنا المتغير اللي راح يحتوي إذا كانت كلمة المرور تحتوي على حروف
    bool hasNumber = false; // هنا المتغير اللي راح يحتوي إذا كانت كلمة المرور تحتوي على أرقام
    for (int i = 0; i < password.length(); i++) {
        if (isalpha(password[i])) { // إذا كان المدخل حرف
            hasLetter = true;
        } else if (isdigit(password[i])) { // إذا كان المدخل رقم
            hasNumber = true;
        }
    }
    if (password.length() >= 8 && hasLetter && hasNumber) { //اذا كان hasLetter و hasNumber صحيحة 
        std::cout << "Valid Password" << std::endl;
    } else {
        std::cout << "Invalid Password" << std::endl;
    }
    return 0;
}
