#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

struct MARSH {
    string startDestination;
    string endDestination;
    int routeNumber;
};

bool compareByRouteNumber(const MARSH& a, const MARSH& b) {
    return a.routeNumber < b.routeNumber;
}

int main() {
    const int numRoutes = 8;
    MARSH routes[numRoutes];

    // Ввод данных с клавиатуры и запись в файл
    ofstream outFile("routes.txt");
    for (int i = 0; i < numRoutes; ++i) {
        cout << "Введите начальный пункт, конечный пункт и номер маршрута (через пробел): ";
        cin >> routes[i].startDestination >> routes[i].endDestination >> routes[i].routeNumber;
        outFile << routes[i].startDestination << ' ' << routes[i].endDestination << ' ' << routes[i].routeNumber << endl;
    }
    outFile.close();

    // Чтение данных из файла и вывод на экран
    ifstream inFile("routes.txt");
    MARSH readRoutes[numRoutes];
    for (int i = 0; i < numRoutes; ++i) {
        inFile >> readRoutes[i].startDestination >> readRoutes[i].endDestination >> readRoutes[i].routeNumber;
        cout << "Маршрут " << readRoutes[i].routeNumber << ": " << readRoutes[i].startDestination << " - " << readRoutes[i].endDestination << endl;
    }
    inFile.close();

    // Вывод информации о маршрутах по введенному пункту
    string searchDestination;
    cout << "Введите название пункта для поиска: ";
    cin >> searchDestination;

    bool found = false;
    sort(readRoutes, readRoutes + numRoutes, compareByRouteNumber);
    for (int i = 0; i < numRoutes; ++i) {
        if (readRoutes[i].startDestination == searchDestination || readRoutes[i].endDestination == searchDestination) {
            cout << "Маршрут " << readRoutes[i].routeNumber << ": " << readRoutes[i].startDestination << " - " << readRoutes[i].endDestination << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Маршрутов с таким пунктом не найдено." << endl;
    }

    return 0;
}
