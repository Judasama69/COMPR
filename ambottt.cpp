#include <iostream>
using namespace std;

int main() {
    int drinkChoice;
    int drinkPrice = 0;
    string drinkName = "";
    int foodPrice = 0;
    string foodName = "";
    int foodChoice;

    // Food menu
    cout << "WELCOME TO OASHNIE'S RESTAURANT\n";
    cout << "FOOD MENU:\n";
    cout << "1. Pansit bihon      - PHP 30.00\n";
    cout << "2. Lumpiang shanghai - PHP 10.00\n";
    cout << "3. Lechon kawali     - PHP 80.00\n";
    cout << "4. Spaghetti         - PHP 20.00\n";
    cout << "Enter your food choice (1-4): ";
    cin >> foodChoice;

    switch (foodChoice) {
        case 1:
            foodName = "Pansit bihon"; foodPrice = 30; break;
        case 2:
            foodName = "Lumpiang shanghai"; foodPrice = 10; break;
        case 3:
            foodName = "Lechon kawali"; foodPrice = 80; break;
        case 4:
            foodName = "Spaghetti";
            foodPrice = 20;
            break;
        default:
            cout << "Invalid food choice. Please choose a number between 1 and 4.\n";
            return 0;
    }

    // Ask if the user wants a drink
    cout << "\nWould you like to order a drink?\n";
    cout << "1. Yes\n";
    cout << "2. No\n";
    cout << "Enter your choice: ";
    cin >> drinkChoice;

    if (drinkChoice == 1) {
        // Drink menu
        cout << "\nDRINK MENU:\n";
        cout << "1. Soft drink  - PHP 15.00\n";
        cout << "2. Iced tea    - PHP 20.00\n";
        cout << "3. Water       - PHP 10.00\n";
        cout << "Enter your drink choice (1-3): ";
        cin >> drinkChoice;

        switch (drinkChoice) {
            case 1:
                drinkName = "Soft drink";
                drinkPrice = 15;
                break;
            case 2:
                drinkName = "Iced tea";
                drinkPrice = 20;
                break;
            case 3:
                drinkName = "Water";
                drinkPrice = 10;
                break;
            default:
                cout << "Invalid drink choice. No drink will be added to your order.\n";
        }
    } else if (drinkChoice != 2) {
        cout << "Invalid choice. Please select 1 (Yes) or 2 (No).\n";
        return 0;
    }

    // Display the summary of the order
    cout << "\nORDER SUMMARY:\n";
    cout << "You ordered: " << foodName << " - " << foodPrice << " Pesos\n";
    if (drinkPrice > 0) {
        cout << "You added: " << drinkName << " - " << drinkPrice << " Pesos\n";
    }
    cout << "Total Price: " << (foodPrice + drinkPrice) << " Pesos\n";
    cout << "Thank you for dining with us!\n";

    return 0;
}
