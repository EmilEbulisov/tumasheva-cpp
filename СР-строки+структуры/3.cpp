//Вывести фамилии спортсменов, возраст которых больше введенного пользователем числа: Для этой задачи нам нужно знать структуру данных, в которой хранится информация о спортсменах. Если у вас есть массив или другая структура, содержащая информацию о спортсменах, вы можете использовать цикл для проверки возраста каждого спортсмена и вывода фамилий тех, чей возраст больше заданного числа. Например, если у вас есть массив спортсменов с полями “Фамилия”, “Возраст” и “Команда”, вы можете сделать что-то вроде:
#include <iostream>
#include <string>
using namespace std;

struct Sportsman {
    string lastName;
    int age;
    string team;
};

int main() {
    const int sportsmanCount = 10;
    Sportsman sportsmen[sportsmanCount];

    for (int i = 0; i < sportsmanCount; ++i) {
    cout << "Введите фамилию спортсмена " << i + 1 << ": ";
    cin >> sportsmen[i].lastName;
    cout << "Введите возраст спортсмена " << i + 1 << ": ";
    cin >> sportsmen[i].age;
    cout << "Введите команду спортсмена " << i + 1 << ": ";
    cin >> sportsmen[i].team;
}


    int userAge;
    cout << "Введите возраст: ";
    cin >> userAge;

    cout << "Фамилии спортсменов, возраст которых больше " << userAge << ":" << endl;
    for (int i = 0; i < sportsmanCount; ++i) {
        if (sportsmen[i].age > userAge) {
            cout << sportsmen[i].lastName << endl;
        }
    }

    return 0;
}
