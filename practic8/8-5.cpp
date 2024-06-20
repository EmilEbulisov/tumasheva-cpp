#include <iostream>
#include <cmath> // Для использования функции abs()

using namespace std;

// Функция для подсчета суммы цифр целого числа
int sumOfDigits(int num) {
    num = abs(num); // Берем модуль числа, чтобы работать только с положительными значениями
    if (num < 10) {
        return num; // Если число однозначное, возвращаем его
    } else {
        return (num % 10) + sumOfDigits(num / 10); // Рекурсивно суммируем цифры
    }
}

int main() {
    double realNumber = 1234.5678; // Пример вещественного числа
    int integerPart = static_cast<int>(realNumber); // Получаем целую часть

    int sum = sumOfDigits(integerPart);

    cout << "Сумма цифр вещественного числа " << realNumber << " равна " << sum << endl;

    return 0;
}
