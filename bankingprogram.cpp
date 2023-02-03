# Github
Banking program
// by Mahdy Mollayousefy

#include "iostream"

void showBalance(double balance);

double deposite();

double withDraw(double balance);

int main() {
    double balance = 10;
    int choice = 0;

    do {
        std::cout << "Chose your option\n\n";
        std::cout << "Press 1 to ' Show Balance '\n";
        std::cout << "Press 2 to ' Deposite '\n";
        std::cout << "Press 3 to ' Withdraw '\n";
        std::cout << "Press 4 to ' Quit '\n";

        std::cin >> choice;
        std::cin.clear();
        fflush(stdin);

        switch (choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposite();
                showBalance(balance);
                break;
            case 3:

                balance -= withDraw(balance);
                showBalance(balance);

                break;
            case 4:
                std::cout << "\nThanks for using our system!\n";
                break;
            default:
                std::cout << "Invalid request!\n";
                break;
        }


    } while (choice != 4);


    return 0;
}

void showBalance(double balance) {


    std::cout << "Your balance is: $ " << balance << "\n\n";
}

double deposite() {
    double amount = 0;

    std::cout << "Enter the amount you want to deposite\n";
    std::cin >> amount;
    if (amount > 0) {
        return amount;
    } else {
        std::cout << "That's not a valid amount!\n\n";
    }

    return 0;

}

double withDraw(double balance) {
    double amount = 0;

    std::cout << "Enter the amount you want to withdraw\n";
    std::cin >> amount;

    if (balance >= amount > 0) {
        return amount;
    } else {
        std::cout << "That's not a valid amount!\n\n";
    }

    return 0;

}
