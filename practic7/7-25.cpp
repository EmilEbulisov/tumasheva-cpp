#include <iostream>
#include <cmath> // Для использования функции pow()

using namespace std;

// Структура для представления обыкновенной дроби
struct Fraction {
    int numerator;   // Числитель
    int denominator; // Знаменатель
};

// Функция для возведения дроби в степень
Fraction powerFraction(const Fraction& frac, int exponent) {
    Fraction result;
    result.numerator = pow(frac.numerator, exponent);
    result.denominator = pow(frac.denominator, exponent);
    return result;
}

int main() {
    Fraction myFraction;
    myFraction.numerator = 3;     // Пример числителя
    myFraction.denominator = 4;   // Пример знаменателя
    int exponent = 2;            // Степень, в которую нужно возвести дробь

    Fraction result = powerFraction(myFraction, exponent);

    cout << "Результат: " << result.numerator << "/" << result.denominator << endl;

    return 0;
}
