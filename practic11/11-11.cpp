#include <iostream>
#include <cmath> // Для использования функции sqrt()

class LinearEquation {
public:
    float first; // Коэффициент A
    float second; // Коэффициент B

    // Метод для ввода значений с клавиатуры
    void Read() {
        std::cout << "Введите коэффициент A: ";
        std::cin >> first;
        std::cout << "Введите коэффициент B: ";
        std::cin >> second;
    }

    // Метод для вывода значений на экран
    void Display() {
        std::cout << "Коэффициент A: " << first << std::endl;
        std::cout << "Коэффициент B: " << second << std::endl;
    }

    // Метод для вычисления корня линейного уравнения
    float function() {
        if (first == 0) {
            std::cout << "Уравнение не является линейным." << std::endl;
            return 0;
        }
        return -second / first;
    }
};

int main() {
    LinearEquation equation;
    equation.Read();
    equation.Display();
    std::cout << "Корень линейного уравнения: " << equation.function() << std::endl;

}
