#include <iostream>
#include <random>
using namespace std;

#ifdef _WIN32
#define CLEAR_COMMAND "cls"
#else
#define CLEAR_COMMAND "clear"
#endif

int main() {
    int userLowNumber;
    int userHighNumber;
    char choice;

    do {
        system(CLEAR_COMMAND);

        cout << "Enter your min number: ";
        cin >> userLowNumber;

        cout << "\nEnter your high number: ";
        cin >> userHighNumber;

        random_device dev;
        mt19937 rng(dev());
        uniform_int_distribution<mt19937::result_type> dist6(userLowNumber, userHighNumber);

        cout << "Results: " << dist6(rng);

        cout << "\n\nContinue? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}