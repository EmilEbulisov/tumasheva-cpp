#include <iostream>
#include <string>
using namespace std;

struct Student {
    string lastName;
    string firstName;
    int classNumber;
    double mathGrade;
    double russianGrade;
    double physicsGrade;
};

double calculateAverage(double a, double b, double c) {
    return (a + b + c) / 3.0;
}

int main() {
    const int numStudents = 10;
    Student students[numStudents];

    // Ввод данных для каждого ученика
    for (int i = 0; i < numStudents; ++i) {
        cout << "Введите данные для ученика " << i + 1 << ":\n";
        cout << "Фамилия: ";
        cin >> students[i].lastName;
        cout << "Имя: ";
        cin >> students[i].firstName;
        cout << "Номер класса: ";
        cin >> students[i].classNumber;
        cout << "Оценка по математике: ";
        cin >> students[i].mathGrade;
        cout << "Оценка по русскому языку: ";
        cin >> students[i].russianGrade;
        cout << "Оценка по физике: ";
        cin >> students[i].physicsGrade;
    }

    // Вывод среднего балла для каждого ученика
    cout << "\nСредний балл для каждого ученика:\n";
    for (int i = 0; i < numStudents; ++i) {
        double avgGrade = calculateAverage(students[i].mathGrade, students[i].russianGrade, students[i].physicsGrade);
        cout << students[i].lastName << " " << students[i].firstName << ": " << avgGrade << endl;
    }

    return 0;
}
