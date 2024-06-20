#include <iostream>
#include <string> // Для работы со строками

class HexNumber {
public:
    int first; // Целая часть числа (в 16-ричной системе)
    int second; // Дробная часть числа (в 16-ричной системе)

    // Метод для ввода значений с клавиатуры
    void Read() {
        std::cout << "Введите целую часть числа (в 16-ричной системе): ";
        std::cin >> std::hex >> first; // Считываем в 16-ричной системе
        std::cout << "Введите дробную часть числа (в 16-ричной системе): ";
        std::cin >> std::hex >> second; // Считываем в 16-ричной системе
    }

    // Метод для вывода значений на экран
    void Display() {
        std::cout << "Целая часть числа: " << std::hex << first << std::endl;
        std::cout << "Дробная часть числа: " << std::hex << second << std::endl;
    }

    // Метод для сложения чисел в 16-ричной системе
    void mult2() {
        int result = first + second;
        std::cout << "Сумма чисел в 16-ричной системе: " << std::hex << result << std::endl;
    }
};

int main() {
    HexNumber number;
    number.Read();
    number.Display();
    number.mult2();

    return 0;
}
