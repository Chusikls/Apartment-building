#include <iostream>

int main()
{
    std::string residents[10];
    for (int n = 0; n < 10; n++) {
        std::cout << "Enter last name: \n";
        std::cin >> residents[n];
    }
    for (int n = 0; n < 3; n++) {
        int i = 0;
        std::cout << "Enter apartment number: \n";
        std::cin >> i;
        i--;
        if (i <= 10 && i > -1) {
            std::cout << residents[i] << '\n';
        }
        else std::cout << "No apartment";

    }
    
}


