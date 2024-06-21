#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

struct AEROFLOT {
    string destination;
    int flightNumber;
    string aircraftType;
};

bool compareByDestination(const AEROFLOT& a, const AEROFLOT& b) {
    return a.destination < b.destination;
}

int main() {
    const int numFlights = 7;
    AEROFLOT flights[numFlights];

    // Ввод данных с клавиатуры и запись в файл
    ofstream outFile("flights.txt");
    for (int i = 0; i < numFlights; ++i) {
        cout << "Введите название пункта назначения, номер рейса и тип самолета (через пробел): ";
        cin >> flights[i].destination >> flights[i].flightNumber >> flights[i].aircraftType;
        outFile << flights[i].destination << ' ' << flights[i].flightNumber << ' ' << flights[i].aircraftType << endl;
    }
    outFile.close();

    // Чтение данных из файла и вывод на экран
    ifstream inFile("flights.txt");
    AEROFLOT readFlights[numFlights];
    for (int i = 0; i < numFlights; ++i) {
        inFile >> readFlights[i].destination >> readFlights[i].flightNumber >> readFlights[i].aircraftType;
        cout << "Рейс " << readFlights[i].flightNumber << " в " << readFlights[i].destination << " (тип самолета: " << readFlights[i].aircraftType << ")" << endl;
    }
    inFile.close();

    // Вывод пунктов назначения и номеров рейсов по типу самолета
    string searchType;
    cout << "Введите тип самолета для поиска: ";
    cin >> searchType;

    bool found = false;
    sort(readFlights, readFlights + numFlights, compareByDestination);
    for (int i = 0; i < numFlights; ++i) {
        if (readFlights[i].aircraftType == searchType) {
            cout << "Рейс " << readFlights[i].flightNumber << " в " << readFlights[i].destination << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Самолетов с таким типом не найдено." << endl;
    }

    return 0;
}
