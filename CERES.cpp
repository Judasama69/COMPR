#include <iostream>
using namespace std;

int main() {
    string destinationName;
    int destination, userTyped;
    float total, fare, discount = 0;

    cout << "1. Bais - Dumaguete (80 Pesos)\n";
    cout << "2. Bais - Sibulan (70 Pesos)\n";
    cout << "3. Bais - San Jose (60 Pesos)\n";
    cout << "4. Bais - Amlan (50 Pesos)\n";
    cout << "5. Bais - Tanjay (40 Pesos)\n";
    cout << "Where to stop? (Choose 1 - 5): ";
    cin >> destination;

    switch (destination) {
        case 1: fare = 80; destinationName = "Bais to Dumaguete"; break;
        case 2: fare = 70; destinationName = "Bais to Sibulan"; break;
        case 3: fare = 60; destinationName = "Bais to San Jose"; break;
        case 4: fare = 50; destinationName = "Bais to Amlan"; break;
        case 5: fare = 40; destinationName = "Bais to Tanjay"; break;
        default: cout << "Invalid choice!\n"; 
		return main();
    }

    cout << "\n1. Student? (5% Discount)";
    cout << "\n2. Senior? (10% Discount)";
    cout << "\n3. Regular? (No Discount)";
    cout << "\n(Choose your eligibility (1,2,3) ): ";
    cin >> userTyped;
    cout << "\nYour destination is " << destinationName;

    switch (userTyped) {
        case 1: discount = fare * 0.05; cout << "\nYou are a Student and your discount is " << discount << " Pesos" << endl; break;
        case 2: discount = fare * 0.10; cout << "\nYou are a Senior and your discount is " << discount << " Pesos" << endl; break;
        case 3: discount = 0; cout << "\nYou are a Regular passenger and have no discount." << endl; break;
        default: cout << ", but you made an invalid choice. Please try again.\n";
		return main();
    }

    total = fare - discount;
    cout << "Your total payment is " << total << " Pesos" << endl;
    return 0;
}