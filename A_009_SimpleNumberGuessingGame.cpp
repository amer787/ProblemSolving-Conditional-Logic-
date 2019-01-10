#include <iostream>

/**
 * Problem 9: Simple Number Guessing Game
 * Write a program that generates a random number between 1 and 10
 *  and asks the user to guess the number. 
 * If the user's guess is higher than the random number, print "Too high!",
 *  if it's lower, print "Too low!", 
 *  and if it's the same, print "You got it!".
 */

int main() {
    int randomNumber = rand() % 10 + 1; // هنا نستخدم الدالة rand() لإنشاء رقم عشوائي بين 1 و 10
    int userGuess; // هنا المتغير اللي راح يحتوي تخمين الرقم اللي يدخله المستخدم
    std::cout << "Guess the number (between 1 and 10): ";
    std::cin >> userGuess; // هنا نقرأ تخمين الرقم اللي يدخله المستخدم

    // هنا نستخدم العمليات الرياضية لمعرفة إذا كان تخمين المستخدم أعلى أو أقل أو نفس الرقم العشوائي
    // نستخدم العمليات الرياضية لأن تخمين المستخدم هو رقم
    if (userGuess > randomNumber) {
        std::cout << "Too high!" << std::endl;
    } else if (userGuess < randomNumber) {
        std::cout << "Too low!" << std::endl;
    } else {
        std::cout << "You got it!" << std::endl;
    }
    return 0;
}