#include <iostream>

/*
Problem 3: Leap Year Checker
This program asks the user to enter a year and determines whether it is a leap year.
 (A year is a leap year if it is divisible by 4, but not by 100, unless it is also divisible by 400.)
*/
/** 
 * تعريف بسيط عن السنه الكبيسة : هي سنة عدد أيامها 366 يوما بدلا من 365 يوما
 *  السنة الكبيسة هي السنة اللي تقسم على 4 بدون باقي
 *  وإذا كانت تقسم على 100 يكون الباقي 0 
 * وإذا كانت تقسم على 400 يكون الباقي 0 
 * مثال : اذا كانت السنة 2000 فهي كبيسة لأنها تقسم على 400 بدون باقي
 * واذا كانت السنة 1900 فهي ليست كبيسة لأنها تقسم على 100 ولكن ليست كبيسة
*/

int main() {
    int year; // هنا المتغير اللي راح يحتوي السنة اللي يدخلها المستخدم
    std::cout << "Enter a year: ";
    std::cin >> year; // هنا نقرأ السنة اللي يدخلها المستخدم

    // هنا نستخدم العمليات الرياضية لمعرفة إذا كانت السنة كبيسة أو لا
    // السنة الكبيسة تقبل القسمة على 4 ولكن ليس على 100 إلا إذا كانت تقبل القسمة على 400 أيضًا
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) { 
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }
    return 0;
}