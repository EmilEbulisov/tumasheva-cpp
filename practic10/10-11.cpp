#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void getNextDay(Date& currentDate) {
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (currentDate.month == 2 && isLeapYear(currentDate.year)) {
        daysInMonth[2] = 29;
    }

    if (currentDate.day < daysInMonth[currentDate.month]) {
        currentDate.day++;
    } else {
        currentDate.day = 1;
        if (currentDate.month < 12) {
            currentDate.month++;
        } else {
            currentDate.month = 1;
            currentDate.year++;
        }
    }
}

int main() {
    Date today;
    cout << "Введите сегодняшнюю дату (день месяц год): ";
    cin >> today.day >> today.month >> today.year;

    getNextDay(today);

    cout << "Завтрашняя дата: " << today.day << " " << today.month << " " << today.year << endl;

    return 0;
}
