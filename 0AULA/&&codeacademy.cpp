#include <iostream>

int main() {

    int hunger = true;
    int anger = true;
    int day = 6;
    bool logged_in = false;

    
    if (!(10 < 11)) {
        std::cout << "\nVerdadeiro\n";

    }
    else { std::cout << "\nFalso\n"; }
    
    // Write the code below:
    if (hunger && anger) {
        std::cout << "\nHangry\n\n";
    }

    if (day == 6 || day == 7) {
        std::cout << "Weekend\n\n";
    }

    if (!logged_in) {
        std::cout << "Try Again\n\n";
    }
}