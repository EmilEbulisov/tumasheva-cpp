#include <iostream>
#include <cctype> // Для функции std::toupper

int main() {
    std::string input;
    std::cout << "Введите строку: ";
    std::getline(std::cin, input);

    for (char& c : input) {
        if (std::islower(c)) {
            c = std::toupper(c); // Преобразование в прописную букву
        }
    }

    std::cout << "Преобразованная строка: " << input << std::endl;

    return 0;
}
