#include <iostream>
#include <fstream>
#include <string>
#include <algorithm> // Для сортировки

using namespace std;

// Определение структуры SOTRUD
struct SOTRUD {
    string last_name;
    string first_name;
    string position;
    int birth_year;
    int hire_year;
};

int main() {
    const int num_employees = 8;
    SOTRUD employees[num_employees];

    // Ввод данных с клавиатуры
    for (int i = 0; i < num_employees; ++i) {
        cout << "Введите данные для сотрудника " << i + 1 << ":\n";
        cout << "Фамилия: ";
        cin >> employees[i].last_name;
        cout << "Имя: ";
        cin >> employees[i].first_name;
        cout << "Должность: ";
        cin >> employees[i].position;
        cout << "Год рождения: ";
        cin >> employees[i].birth_year;
        cout << "Год поступления на работу: ";
        cin >> employees[i].hire_year;
    }

    // Запись данных в файл
    ofstream outfile("employees.txt");
    for (int i = 0; i < num_employees; ++i) {
        outfile << employees[i].last_name << " "
                << employees[i].first_name << " "
                << employees[i].position << " "
                << employees[i].birth_year << " "
                << employees[i].hire_year << endl;
    }
    outfile.close();

    // Чтение данных из файла и вывод на экран
    ifstream infile("employees.txt");
    string line;
    cout << "\nДанные сотрудников из файла:\n";
    while (getline(infile, line)) {
        cout << line << endl;
    }
    infile.close();

    // Вывод сведений о сотрудниках с большим стажем
    int input_year;
    cout << "\nВведите год для проверки стажа: ";
    cin >> input_year;

    cout << "\nСотрудники с большим стажем:\n";
    for (int i = 0; i < num_employees; ++i) {
        if (input_year - employees[i].hire_year > 0) {
            cout << employees[i].last_name << " "
                << employees[i].first_name << endl;
        }
    }

    // Сортировка по фамилиям
    sort(employees, employees + num_employees,
         {
            return a.last_name < b.last_name;
        });

    cout << "\nСписок сотрудников, упорядоченный по алфавиту фамилий:\n";
    for (int i = 0; i < num_employees; ++i) {
        cout << employees[i].last_name << " "
            << employees[i].first_name << endl;
    }

    return 0;
}
