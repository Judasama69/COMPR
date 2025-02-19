#include <iostream>
using namespace std;

int main() {
    int seatType, numTickets, price;

    cout << "Choose your preferred seat type:" << endl;
    cout << "1. Regular seat (150 pesos per ticket)" << endl;
    cout << "2. VIP seat (250 pesos per ticket)" << endl;
    cout << "3. Premium seat (350 pesos per ticket)" << endl;
    cin >> seatType;

    cout << "Enter the number of tickets you want to purchase:" << endl;
    cin >> numTickets;

    if (seatType == 1) {
        price = 150;
        cout << "You chose a Regular seat." << endl;
    } else if (seatType == 2) {
        price = 250;
        cout << "You chose a VIP seat." << endl;
    } else if (seatType == 3) {
        price = 350;
        cout << "You chose a Premium seat." << endl;
    } else {
        cout << "Invalid choice. Please select a valid seat type." << endl;
        return 0;
    }

    float totalPrice = price * numTickets;
    cout << "The total price for " << numTickets << " tickets is " << totalPrice << " pesos." << endl;

    return 0;
}

