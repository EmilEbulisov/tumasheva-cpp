#include <iostream>

class Product {
public:
    float first; // Цена товара
    int second;  // Количество единиц товара

    // Метод для ввода значений с клавиатуры
    void Read() {
        std::cout << "Введите цену товара (вещественное число): ";
        std::cin >> first;
        std::cout << "Введите количество товара (целое положительное число): ";
        std::cin >> second;
    }

    // Метод для вывода значений на экран
    void Display() {
        std::cout << "Цена товара: " << first << std::endl;
        std::cout << "Количество товара: " << second << std::endl;
    }

    // Метод для вычисления стоимости товара
    float cost() {
        return first * second;
    }
};

int main() {
    Product product;
    product.Read();
    product.Display();
    std::cout << "Стоимость товара: " << product.cost() << std::endl;

    return 0;
}
