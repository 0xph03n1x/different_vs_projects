#include <iostream>                       

extern "C" int asm_factorial(int number);

int factorial(int number) {
    int result = 1;
    if (number > 1) {
        do {
            result *= number;
            number--;
        } while (number > 0);
    }
    return result;
};


int main() {

    std::cout << factorial(6) << "\n";
    std::cout << asm_factorial(6) << "\n";

};
